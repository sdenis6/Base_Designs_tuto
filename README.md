# Base designs tuto

The document [Base_designs.pdf](https://github.com/sdenis6/Base_Designs_tuto/blob/master/Base_designs.pdf) provides a first help of how to build numerical RF designs/bitstreams for fpga boards, using Vivado and the IPs available with the project [OscillatorIMP](https://github.com/oscimp). 

Summary:

1. Reminder on signal dynamics
2. Webserver
3. Double voltage source
4. Double DDS
5. Amplitude modulation
6. Sine perturbation of a signal
7. Frequency and phase modulation of a NCO
8. Filtering
9. Demodulation
10. Monitoring
11. Example to a control loop

## IPs as RF functions

| IP | Equivalent RF function <br/> *or numeric function* | Equivalent scheme with tuneable entries |
| ----------- | :-----------: | :-----------: |
| <img src='readme_figs/offset1.png' width='600'> | Tunable amplitude offset, bias. <br/> *The added offset value is internal to the block.* | <img src='readme_figs/offset2.png' width='160'> |
| <img src='readme_figs/splitter1.png' width='600'> | Splitter | <img src='readme_figs/splitter.png' width='200'>  |
| <img src='readme_figs/add1.png' width='650'> | Combiner. <br/> *Add or subtract signals. The added/subtracted signal is external to the block unlike the add\_const block.* | <img src='readme_figs/add.png' width='200'>  |
| <img src='readme_figs/mixer1.png' width='550'> | Mixer, multiplier. | <img src='readme_figs/mixer.png' width='200'> |
| <img src='readme_figs/filter1.png' width='600'> | Tunable filter. <br/> *FIR with decimation option.* | <img src='readme_figs/filter.png' width='200'>  |
| <img src='readme_figs/exp1.png' width='500'> <img src='readme_figs/sh1.png' width='700'> | Can be assimilated to 2^m amplifiers or attenuators. <br/> *Are used to adapt the data size between blocks, or to select the range of the numeric signal.  Expander: crop end of word, expand beginning of word. Shift: crop beginning of word, expand end of word.* | <img src='readme_figs/exp.png' width='200'> <img src='readme_figs/sh.png' width='200'> <img src='readme_figs/shd.png' width='350'>  |
| <img src='readme_figs/switch1.png' width='550'> | Switch | <img src='readme_figs/switch.png' width='200'>  |
| <img src='readme_figs/moy1.png' width='500'> | Moving average. <br/> *Decimation of 2^n with averaging: slows the data flow.* | <img src='readme_figs/moy.png' width='200'>  |
| <img src='readme_figs/delay1.png' width='600'> | Tunable delay line ie. cables. | <img src='readme_figs/delay.png' width='300'>  |
| <img src='readme_figs/const1.png' width='600'> | Tunable voltage source. <br/> *Controllable states/constants.*  | <img src='readme_figs/const.png' width='150'>  |
| <img src='readme_figs/nco1.png' width='700'> | DDS<br/> *NCO* | <img src='readme_figs/nco.png' width='500'>  |
| <img src='readme_figs/pid1.png' width='700'> | PID  | <img src='readme_figs/pid.png' width='200'>  |
| <img src='readme_figs/data2ram1.png' width='550'> | Monitoring: oscilloscope, spectrum analyzer... <br/> *Can also be used to process the signal in the CPU. Up to 12 channels.* | <img src='readme_figs/data2ram.png' width='200'>  |
| <img src='readme_figs/c2r1.png' width='700'> | Split or combine In-phase and Quadrature components. <br/> *Convert R to C or C to R.* | <img src='readme_figs/c2r.png' width='200'> <img src='readme_figs/r2c.png' width='200'>  |

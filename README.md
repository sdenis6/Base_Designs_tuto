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

| IP | Equivalent RF function or numeric function | Equivalent scheme with tuneable entries |
| :-----------: | :-----------: | :-----------: |
|[offset](figures/Offset.pdf) | Tunable amplitude offset, bias. | |

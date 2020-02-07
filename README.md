Thinger Linux client is a library that allows connecting your Linux IoT devices to the thinger.io cloud platform, or even your private server deployment. This is a library specifically designed for the Linux Operating Systems, so you can easily connect devices like a Raspberry Pi, Intel Edison, Ubuntu, Mac, etc.

## In progress

This library is currently being developed and should not be integrated in any production device until it is more mature and tested. The library interface may change as it evolve to a stable version. Some things that requires attention now are:

 - Document code
 - Provide more examples and use cases
 - Provide a proper guide for installing the client as a service and support more devices like beaglebone
 - Check the reconnection mechanism and its reliability
 - Handle signals for proper daemon shutdown
 - Support OTA updates?
 - Load credentials from external config files?
 - Distribute the code as library?
 
## Quickstart
 
The simplest way to start using thinger.io platform in Linux is by modifying the ```src/main.cpp``` to add your username, device, and device credentials. 
Then you can type in your terminal ```./run.sh```, that will compile, start and run the thinger.io client.
  
## Notes for compiling on Raspberry Pi

- Check the compiler version and install a newer compiler if necessary. At least GCC 4.8.2.
- Install CMake ```sudo apt-get install cmake```
- Install Open SSL Libraries (not required but useful for secured connection) ```sudo apt-get install libssl-dev```

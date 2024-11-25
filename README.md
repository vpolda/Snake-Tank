# Snake Tank

A temperature and humidity monitoring system primarly used for reptile terrariums. 

## Description

A custom ESP32-S3 PCB for temperature and humidity monitoring, along with camera monitoring. Supports up to four (4) external DHT11 sensors. The data can either be monitored through the onboard LCD display or remotely on a wifi device through Arduino Cloud. Two ESP32 Camera modules are attached externally for live video feed.

![SnakeTank PCB in KiCad 3D View](images/pcb.PNG/?raw=true "SnakeTank PCB in KiCAD 3D viewer")

## Design

It currently uses an ESP32-S3-WROOM-1-N8 along with module DHT11 sensors. The DHT11s where chosen for affordability and the need for general accuracy, not precision.
The DHT11 sensors are attached through an RJ45 port and an ethernet cable. These were chosen for their widely avaible nature and simplicity.
An onboard LCD screen is used to check sensor readings at any time. 
The Arduino Cloud was chosen for remote access to the available data due to ease of use and simplistic nature.

The ESP32 cameras were selected for their independence with the ability to host their own webserver or connect to another remote server. While an onboard/connection is preferred, the simpliticy and power management setup would be easier to do.

A custom four layer PCB was designed for this project using a Signal+power/GND/GND/Signal+power stackup. This was done as a learning exercise for PCB best practices. The LCD screen is on the bottom side of the board to minimize PCB size.

![SnakeTank PCB Schematic Main](images/sch_1.PNG/?raw=true "SnakeTank PCB Schematic Main")
![SnakeTank PCB Schematic Peripherals](images/sch_2.PNG/?raw=true "SnakeTank PCB Schematic Periphs")

## Getting Started

### File Structure
- Camera - Arduino code for each ESP32 camera. 
   - ESP32_camera_webserverHost: Hosting a webserver locally on each MCU

- Hardware
   - Datasheets: Self explain
   - KiCAD: Kicad project files for custom PCB w/ ESP32
   - snakeTank_currentEstimate: Power estimate SS
 
- Software
   - Integration: combining software modules
   - OnboardDisplay: tests of the 1602A
   - LCD_interrupt: Displaying on 1602 through Arduino interrupts and timers 
   - SensorReading: reading from the dht11 modules testing
   - Camera: code for separate external esp32 cameras
  
### Dependencies


### Installing


### Executing program


## Help

## Authors

Victoria Polda
www.linkedin.com/in/victoriapolda

## Version History

* 0.1
    * Initial Release

## License

MIT License

Copyright (c) 2024 Victoria Polda

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

## Acknowledgments

Inspired by my Ghost corn snake Kynes :) 

# Snake Tank

A temperature and humidity monitoring system primarly used for reptile terrariums. 

## Description

A custom ESP32-S3 PCB for temperature and humidity monitoring. Supports up to four (4) external DHT11 sensors, currently two are implemented externally. 
View the data either through the onboard LCD display or remotely on a wifi device through Arduino Cloud

## Design

It currently uses an ESP32-S3-WROOM-1-N8 along with two DHT11 sensors. The DHT11s where chosen for affordability and the need for general accuracy, not precision.
The DHT11 sensors are attached through an RJ45 port and an ethernet cable. These were chosen for their widely avaible nature and simplicity.
An onboard LCD screen is used to check sensor readings at any time. 
The Arduino Cloud was chosen for remote access to the available data due to ease of use and simplistic nature.

## Getting Started

### File Structure



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

package main

import (
	"github.com/sqp/pulseaudio"
	"github.com/tarm/serial"
	"log"
	"math"
	"time"
)

var data = make([]int, 16)

func audioReader(s *serial.Port) {
	pulseaudio.LoadModule()
	pulse, _ := pulseaudio.New()
	go pulse.Listen()
	for {
		var volume []uint32
		pulse.Device("/org/pulseaudio/core1/sink1").Get("Volume", &volume)
		data[0] = int(math.Round(float64(volume[0]) / 65536 * 16))
		_, err := s.Write([]byte(string(data[0])))
		if err != nil {
			log.Fatal(err)
		}
		time.Sleep(50 * time.Millisecond)
	}
}

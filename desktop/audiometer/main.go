package main

import (
	"github.com/tarm/serial"
	"log"
)

func main() {
	c := &serial.Config{
		Name:        "/dev/ttyACM0",
		Baud:        115200,
		ReadTimeout: 1000,
	}

	s, err := serial.OpenPort(c)
	if err != nil {
		log.Fatal(err)
	}
	go audioReader(s)

	for {
		buf := make([]byte, 256)
		n, err := s.Read(buf)
		if err != nil {
			continue
		}
		if n > 0 {
			log.Println(string(buf[:n]))
		}
	}
}

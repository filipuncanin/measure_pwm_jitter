#!/bin/bash

sudo dmesg -c
sudo dmesg -c

dmesg -w | tee text.txt

# Stop it with Cltr+C

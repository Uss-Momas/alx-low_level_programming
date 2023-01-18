#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -oliball.so

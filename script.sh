#!/bin/bash

rm chval
gcc main.c -o chval
sudo cp -v chval /bin

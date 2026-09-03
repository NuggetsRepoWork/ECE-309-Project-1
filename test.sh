#!/bin/bash

# Compile the C program to ensure we are testing the latest version
gcc harness.c -o harness

# Pipe 'hello' and 'exit' into the executable
./harness << 'EOF'
hello
exit
EOF

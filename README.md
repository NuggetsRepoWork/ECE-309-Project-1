# ECE-309-Project-1

LLM Mini-Harness written in C. This program simulates a environment similar to what is seen in modern day AI programs such as Claude, Chat GPT, and Gemini.

## Features

- **Main loop** - Reads user inputs and echoes the input back to the user through the command line.
- **Pre-programmed response** - When the user inputs "hello" the program will respond with a premade greeting.
- **Built-in chat termination** - By typing in "exit" the program will exit its loop and terminate the current instance ending the conversation and program entirely.

## Files

| File | Purpose |
|---|---|
| `CMakeLists.txt` | File used to configure any C coding environment to operate `harness.c` & `test_harness.c` together in any environment|
| `harness.c` | The harness itself|
| `test.sh` | Automated Bash test script which uses 'hello' & 'exit' to test functionality of the file harness.c |
| `C Program AI Harness Log.md` | Ai log of vibe coding prompts that was used to create `harness.c` & create aswell as debug `test_harness.c`|
| `README.md` | This file |

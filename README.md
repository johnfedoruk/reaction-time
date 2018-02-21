# Reaction Time
This is a tool for help determine your reaction time.

## What you'll need
- C++ compiler 
    - [MinGW](https://sourceforge.net/projects/mingw-w64/) (Windows)
    - [Cygwin](https://www.cygwin.com/) (Windows)
    - [GNU GCC/G++](https://gcc.gnu.org/) (Linux)
- [Ruler](https://www.amazon.com/rulers/b?ie=UTF8&node=1069364)
- [Friend](http://rentafriend.com/)

## Getting started
You'll first need to download and build the source code.

```bash
git clone https://github.com/johnfedoruk/reaction-speed
cd reaction-speed
make
```

Then you'll need to execute the `run` binaries to start the program.

```bash
# Linux
./run
```

```bash
# Windows
run
```

## Measuring reaction speed
Have a friend hold the ruler orthogonal to the ground. Place your index finger and your thumb around the ruler, ready to catch it. Your friend is to drop the ruler without notice, and you will catch it. Measure the distance the ruler has fallen and enter the measurements.

If the ruler has fallen 5cm, enter that. It will return your reaction time in ms.

```bash
5cm
102.062ms
```

If the ruler has fallen 4", enter that. It will return your reaction time in ms.

```bash
4"
145.488ms
```

To quit the program, type and enter `[q]`

```bash
q
program terminated
```

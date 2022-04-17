# How to profiling

## gprof
- build with pg option.
```
$ g++ test.cpp -pg -o a.out
```

- run
```
$ ./a.out
```

- analyze profiling result
```
$ gprof a.out gmon.out
```

## perf

- preparation
```
$ sudo apt install linux-tools-`uname -r`
```

- analyze 
```
$ sudo perf record -- ./a.out
$ sudo perf report
```
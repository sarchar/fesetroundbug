# fesetroundbug
Is this fesetround a bug on Linux?

# On linux (*this is the value that's wrong*):

```
sarchar@my-pc:~/src/fesetroundbug$ touch build.rs;cargo run --release
   Compiling fesetroundbug v0.1.0 (/home/sarchar/src/fesetroundbug)
    Finished release [optimized] target(s) in 0.63s
     Running `target/release/fesetroundbug`
Should be -4: -5
```

# On windows:

```
D:\home\sarchar\src\fesetroundbug>cargo run --release
   Compiling cc v1.0.83
   Compiling fesetroundbug v0.1.0 (D:\home\sarchar\src\fesetroundbug)
    Finished release [optimized] target(s) in 4.70s
     Running `target\release\fesetroundbug.exe`
Should be -4: -4
```

# On linux:

```
sarchar@my-pc:~/src/fesetroundbug$ clang -o /tmp/test ./src/fenv.c -DTEST -lm && /tmp/test
Should be -4: -4
sarchar@my-pc:~/src/fesetroundbug$ gcc -o /tmp/test ./src/fenv.c -DTEST -lm && /tmp/test
Should be -4: -4
```

# version info

## linux

```
sarchar@my-pc:~/src/fesetroundbug$ rustc --version --verbose
rustc 1.75.0-beta.2 (1bd723f02 2023-11-18)
binary: rustc
commit-hash: 1bd723f02736102a893f9ded7243fe03d80c2954
commit-date: 2023-11-18
host: x86_64-unknown-linux-gnu
release: 1.75.0-beta.2
LLVM version: 17.0.4

sarchar@my-pc:~/src/fesetroundbug$ clang --version
Debian clang version 11.0.1-2
Target: x86_64-pc-linux-gnu
Thread model: posix
InstalledDir: /usr/bin
sarchar@my-pc:~/src/fesetroundbug$ gcc --version
gcc (Debian 10.2.1-6) 10.2.1 20210110
Copyright (C) 2020 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

## windows

```
D:\home\sarchar\src\fesetroundbug>rustc --version --verbose
rustc 1.75.0-beta.1 (782883f60 2023-11-12)
binary: rustc
commit-hash: 782883f609713fe9617ba64d90086742ec62d374
commit-date: 2023-11-12
host: x86_64-pc-windows-msvc
release: 1.75.0-beta.1
LLVM version: 17.0.4
```



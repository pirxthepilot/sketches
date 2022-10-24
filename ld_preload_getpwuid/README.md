# ld_preload: getpwuid() prank

# Build

```
make build
```

# Demo

```
$ whoami
pirx
$ LD_PRELOAD=./getpwuid.so whoami
pirx of house targaryen
$
```

## References

* https://www.sweharris.org/post/2017-03-05-ld-preload/

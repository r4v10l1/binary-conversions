<div align="center">
    <h1>Binary conversions</h1>
    <b>Tiny C program for converting to decimal, binary, octal and hexadecimal</b>
</div>

## Installation
Download compiled binaries from the [releases](https://github.com/r4v10l1/binary-conversions/releases/latest) tab or build the source code using make:
```bash
git clone https://github.com/r4v10l1/binary-conversions
cd binary-conversions
make
./conversor.out --help
```

## Usage

### Decimal
*Syntax:*
```bash
# Note that 'd' can be any word starting with 'd', like 'dec' or 'decimal'
conversor.out d <decimal integer>
```

*Example:*
```console
$ ./conversor.out decimal 420
Dec: 420
Bin: 110100100
Oct: 644
Hex: 1A4
```

### Binary
*Syntax:*
```bash
# Note that 'b' can be any word starting with 'b', like 'bin' or 'binary'
conversor.out b <binary long>
```

*Example:*
```console
$ ./conversor.out binary 111011
Dec: 59
Bin: 111011
Oct: 73
Hex: 3B
```

### Octal
*Syntax:*
```bash
# Note that 'o' can be any word starting with 'o', like 'oct' or 'octal'
conversor.out o <octal integer>
```

*Example:*
```console
$ ./conversor.out octal 1337
Dec: 735
Bin: 1011011111
Oct: 1337
Hex: 2DF
```

### Hexadecimal
*Syntax:*
```bash
# Note that because of type sizes in c, very big numbers fail
# Note that 'h' can be any word starting with 'h', like 'hex' or 'hexadecimal'
conversor.out h <hexadecimal string>
```

*Example:*
```console
$ ./conversor.out hex AE
Dec: 174
Bin: 10101110
Oct: 256
Hex: AE
```

## Compensate
```c
make compensate.out
./compensate.out <max items> < item-list.txt
```

You can see an example of `conversor` and `compensate` in [`misc/binary-table.sh`](misc/binary-table.sh).

## Old method
An old and worse method can be found on the [`old-conversions`](https://github.com/r4v10l1/binary-conversions/tree/old-conversions) branch.


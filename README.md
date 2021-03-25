# printf_test

## Usage

```bash
./do.sh # Run the tester
./do.sh clean # Clean files created by the tester
```

By default, the path to ft_printf is `..`  
You can change the value of `libftprintf_path` in `do.sh`

## How to read the output?

If it says `No difference`, then congratulations! It passes all my tests  
Otherwise the diff is displayed

## But what happened?

You can read the output of the real printf in `true.txt`  
And yours in `this.txt`

Every line is in this format:
```
[N TEST][N LINE] || Returned_value ||
[Output]
```

## Features tested:
- [x] `flag -`
- [x] `flag 0`
- [x] `precision .`
- [x] `*`

- [x] `%c`
- [x] `%s`
- [x] `%p`
- [x] `%d`
- [x] `%i`
- [x] `%u`
- [x] `%xX`
- [x] `%%`

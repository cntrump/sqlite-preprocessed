# sqlite-preprocessed
Preprocessed C sources for SQLite

- [x] macOS
- [x] iOS
- [x] tvOS
- [x] watchOS

## Carthage

Cartfile

```
github "cntrump/sqlite-preprocessed" "master"
```

Run

```shell
carthage update sqlite-preprocessed
```

Or

```shell
carthage update sqlite-preprocessed --platform ios
```

```shell
carthage update sqlite-preprocessed --platform osx
```

```shell
carthage update sqlite-preprocessed --platform tvos
```

```shell
carthage update sqlite-preprocessed --platform watchos
```

## Usage

ObjC

```ObjC
@import sqlite3;
```

Swift

```swift
import sqlite3
```


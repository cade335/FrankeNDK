# FrankeNDK

*Support SDK: 16 - 28* \
*Host Platform: Linux, macOS, Windows* \
*Host Arch: x86_64* \
*Target Arch: ARMv7, ARM64, x86, x86_64*

## Downloads
[Latest Release](https://github.com/topjohnwu/FrankeNDK/releases/latest)

## Why FrankeNDK?
- Starting from NDK r11, dynamically linked binaries built will cause linker warning on Android 5.1 \
([android-ndk/ndk: #622](https://github.com/android-ndk/ndk/issues/622)).
- Newer NDK versions ship with a significant larger static libc, resulting to much larger static binaries.

## How FrankeNDK?
- Start from the latest NDK
- Strip unsupported DT entries from all shared libraries with [elf-cleaner](https://github.com/termux/termux-elf-cleaner)
- Replace static libraries for API 16 with those from r10e.

## Notes
Only building with `APP_PLATFORM := android-16` will benefit from smaller static binary size.

# 更新日志

本项目所有显著变更记录于此。
格式基于 [Keep a Changelog](https://keepachangelog.com/zh-CN/1.1.0/)，
版本号遵循[语义化版本 2.0.0](https://semver.org/lang/zh-CN/)。

## [Unreleased]

## [1.0.1] - 2026-10-15

### Fixed

- 修复 USART1 波特率寄存器按 36MHz 主频误算的问题（0x0138 -> 0x0271）

## [1.0.0] - 2026-10-15

### Added

- 初始化工程：.gitignore、VERSION、CHANGELOG
- 建立分支模型：main / develop / feature / release / hotfix
- 串口驱动骨架（初始化、发送、接收接口）

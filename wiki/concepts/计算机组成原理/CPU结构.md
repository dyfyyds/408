---
type: concept
title: "CPU结构"
subject: 408专业课
chapter: 计算机组成原理
complexity: intermediate
domain: "计算机组成原理"
aliases:
  - CPU数据通路
  - 数据通路
created: 2026-07-04
updated: 2026-07-07
tags:
  - concept
  - 408
  - 计算机组成原理
status: developing
related:
  - "[[CPU与指令系统]]"
  - "[[指令系统]]"
  - "[[指令流水线]]"
sources:
  - ".raw/408/教材PDF/27王道《计算机组成原理》高清带书签.pdf"
---

# CPU结构

## Definition

CPU 由运算器、控制器、寄存器组和内部数据通路组成，负责取指、译码、执行和写回。

## How It Works

- PC：程序计数器，保存下一条指令地址。
- IR：指令寄存器，保存当前指令。
- MAR/MDR：访存地址和数据寄存器。
- 控制器产生控制信号，驱动数据通路完成微操作。

## Exam Focus

- 指令周期、机器周期、时钟周期。
- 单总线/多总线数据通路微操作序列。
- 控制信号和寄存器传送。

## Common Pitfalls

- PC 通常在取指后自动加 1 或加指令长度。
- MAR/MDR 与主存交互，IR 保存指令本身。

## Connections

- [[指令系统]]
- [[指令流水线]]

## 系统补全（2026-07-07）

- 本页归入 [[wiki/408专业课/计算机组成原理/中央处理器|中央处理器]]，重点连接 [[wiki/concepts/计算机组成原理/指令执行过程|指令执行过程]]、[[wiki/concepts/计算机组成原理/数据通路|数据通路]]、[[wiki/concepts/计算机组成原理/控制器|控制器]]。
- CPU 功能可按指令控制、操作控制、时间控制、数据加工和中断处理记忆。
- 寄存器题常考 PC、IR、MAR、MDR、ACC、通用寄存器和状态寄存器的作用边界。
- 做微操作题时先画数据从哪里来、经过哪个部件、写回哪里。

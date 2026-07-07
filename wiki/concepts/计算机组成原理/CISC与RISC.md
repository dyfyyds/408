---
type: concept
title: "CISC与RISC"
subject: 408专业课
chapter: 计算机组成原理
complexity: basic
domain: 计算机组成原理
aliases:
  - CISC
  - RISC
created: 2026-07-07
updated: 2026-07-07
tags:
  - concept
  - 408
  - 计算机组成原理
  - 指令系统
status: developing
related:
  - "[[wiki/408专业课/计算机组成原理/指令系统|指令系统]]"
  - "[[wiki/concepts/计算机组成原理/指令系统|指令系统]]"
  - "[[wiki/concepts/计算机组成原理/指令流水线|指令流水线]]"
sources:
  - "D:/408/资料/27王道考研408（无水印pdf）/27王道《计算机组成原理》高清带书签.pdf"
  - ".raw/408/计算机组成原理/第四章 指令系统.pdf"
---

# CISC与RISC

## 定义

CISC 是复杂指令系统计算机，强调用复杂指令完成较多功能；RISC 是精简指令系统计算机，强调简单、规整、易流水化的指令。

## 核心判断表

| 对比项 | CISC | RISC |
|---|---|---|
| 指令数量 | 多 | 少 |
| 指令字长 | 可变较多 | 多为定长 |
| 寻址方式 | 多 | 少 |
| 寄存器数量 | 相对少 | 相对多 |
| 控制方式 | 常用微程序 | 常用硬布线 |
| 流水线 | 较难优化 | 较易优化 |

## 考点题型

- 给特征判断 CISC/RISC。
- 比较两者对流水线和编译器的影响。
- 解释 Load/Store 架构特点。

## 易错点

- RISC 不是“功能弱”，而是把复杂功能交给编译器和多条简单指令组合完成。
- CISC 不一定慢，RISC 不一定总快，考试主要考典型特征。

## Sources

- 王道《计算机组成原理》第四章。

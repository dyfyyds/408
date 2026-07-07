---
type: meta
title: "计算机组成原理概念索引"
created: 2026-07-05
updated: 2026-07-07
tags:
  - meta
  - index
  - 计算机组成原理
  - concepts
status: developing
parent: "[[wiki/concepts/_index|概念索引]]"
related:
  - "[[wiki/408专业课/计算机组成原理/_index|计算机组成原理索引]]"
---

# 计算机组成原理概念索引

## 高频入口

| 场景 | 先看 | 适合题型 |
|---|---|---|
| 性能指标 | [[wiki/concepts/计算机组成原理/计算机系统概述\|计算机系统概述]] | CPI、CPU执行时间、MIPS/FLOPS |
| 补码与浮点数 | [[wiki/concepts/计算机组成原理/补码溢出判断\|补码溢出判断]] | 溢出判断、IEEE754、浮点加减 |
| Cache 与虚拟存储 | [[wiki/concepts/计算机组成原理/Cache原理\|Cache原理]] | 命中率、映射方式、地址划分 |
| 指令与寻址 | [[wiki/concepts/计算机组成原理/寻址方式\|寻址方式]] | 有效地址、访存次数 |
| CPU 数据通路 | [[wiki/concepts/计算机组成原理/数据通路\|数据通路]] | 微操作、控制信号、指令周期 |
| 流水线 | [[wiki/concepts/计算机组成原理/指令流水线\|指令流水线]] | 冒险处理、吞吐率、加速比 |
| I/O 与 DMA | [[wiki/concepts/计算机组成原理/DMA方式\|DMA方式]] | 中断响应、DMA流程 |

## 模块表

| 模块 | 概念 |
|---|---|
| 总览 | [[wiki/concepts/计算机组成原理/计算机组成原理\|计算机组成原理]]、[[wiki/concepts/计算机组成原理/计算机系统概述\|计算机系统概述]] |
| 数据表示与运算 | [[wiki/concepts/计算机组成原理/数制与编码\|数制与编码]]、[[wiki/concepts/计算机组成原理/校验码\|校验码]]、[[wiki/concepts/计算机组成原理/数据表示\|数据表示]]、[[wiki/concepts/计算机组成原理/定点数运算\|定点数运算]]、[[wiki/concepts/计算机组成原理/补码溢出判断\|补码溢出判断]]、[[wiki/concepts/计算机组成原理/浮点数运算\|浮点数运算]]、[[wiki/concepts/计算机组成原理/算术逻辑单元\|算术逻辑单元]] |
| 存储系统 | [[wiki/concepts/计算机组成原理/存储器\|存储器]]、[[wiki/concepts/计算机组成原理/存储器层次结构\|存储器层次结构]]、[[wiki/concepts/计算机组成原理/主存储器\|主存储器]]、[[wiki/concepts/计算机组成原理/主存与CPU连接\|主存与CPU连接]]、[[wiki/concepts/计算机组成原理/外部存储器\|外部存储器]]、[[wiki/concepts/计算机组成原理/Cache原理\|Cache原理]]、[[wiki/concepts/计算机组成原理/虚拟存储器\|虚拟存储器]] |
| 指令系统 | [[wiki/concepts/计算机组成原理/指令系统\|指令系统]]、[[wiki/concepts/计算机组成原理/寻址方式\|寻址方式]]、[[wiki/concepts/计算机组成原理/机器级代码表示\|机器级代码表示]]、[[wiki/concepts/计算机组成原理/CISC与RISC\|CISC与RISC]] |
| 中央处理器 | [[wiki/concepts/计算机组成原理/CPU结构\|CPU结构]]、[[wiki/concepts/计算机组成原理/指令执行过程\|指令执行过程]]、[[wiki/concepts/计算机组成原理/数据通路\|数据通路]]、[[wiki/concepts/计算机组成原理/控制器\|控制器]]、[[wiki/concepts/计算机组成原理/微程序控制器\|微程序控制器]]、[[wiki/concepts/计算机组成原理/异常与中断\|异常与中断]]、[[wiki/concepts/计算机组成原理/指令流水线\|指令流水线]]、[[wiki/concepts/计算机组成原理/多处理器\|多处理器]] |
| 总线与 I/O | [[wiki/concepts/计算机组成原理/总线系统\|总线系统]]、[[wiki/concepts/计算机组成原理/总线事务和定时\|总线事务和定时]]、[[wiki/concepts/计算机组成原理/总线与IO系统\|总线与IO系统]]、[[wiki/concepts/计算机组成原理/IO接口\|IO接口]]、[[wiki/concepts/计算机组成原理/IO方式\|IO方式]]、[[wiki/concepts/计算机组成原理/DMA方式\|DMA方式]]、[[wiki/concepts/计算机组成原理/中断系统\|中断系统]] |

## 做题场景

| 题型 | 入口 | 提醒 |
|---|---|---|
| 给参数求 CPU 执行时间 | [[wiki/concepts/计算机组成原理/计算机系统概述\|计算机系统概述]] | 先统一主频、周期、指令条数单位 |
| 补码加减溢出 | [[wiki/concepts/计算机组成原理/补码溢出判断\|补码溢出判断]] | 同号相加变异号才溢出 |
| Cache 地址划分 | [[wiki/concepts/计算机组成原理/Cache原理\|Cache原理]] | 先块内地址，再组号/行号，最后标记 |
| 页式虚拟地址转换 | [[wiki/concepts/计算机组成原理/虚拟存储器\|虚拟存储器]] | TLB 命中直接得页框号，未命中查页表 |
| 寻址方式判断 | [[wiki/concepts/计算机组成原理/寻址方式\|寻址方式]] | 看 A 是操作数、地址，还是地址的地址 |
| 数据通路微操作 | [[wiki/concepts/计算机组成原理/数据通路\|数据通路]] | 同一总线同拍只能一个输出源 |
| DMA 过程排序 | [[wiki/concepts/计算机组成原理/DMA方式\|DMA方式]] | 预处理、数据传送、后处理 |

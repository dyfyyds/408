---
type: meta
title: "操作系统概念索引"
created: 2026-07-05
updated: 2026-07-05
tags:
  - meta
  - index
  - 操作系统
  - concepts
status: developing
parent: "[[wiki/concepts/_index|概念索引]]"
related:
  - "[[wiki/408专业课/操作系统/_index|操作系统索引]]"
---

# 操作系统概念索引

## 高频入口

| 场景 | 先看 | 适合题型 |
|---|---|---|
| 进程同步与死锁 | [[wiki/concepts/操作系统/进程同步与通信\|进程同步与通信]] | PV 操作、同步互斥、死锁条件 |
| 虚拟内存与页面置换 | [[wiki/concepts/操作系统/虚拟内存\|虚拟内存]] | 页表、缺页、页面置换 |
| 文件与磁盘 | [[wiki/concepts/操作系统/磁盘调度\|磁盘调度]] | 磁盘调度、空间管理、I/O |

## 模块表

| 模块 | 概念 |
|---|---|
| 总览 | [[wiki/concepts/操作系统/操作系统\|操作系统]] |
| 进程与线程 | [[wiki/concepts/操作系统/进程与线程\|进程与线程]]、[[wiki/concepts/操作系统/进程调度\|进程调度]]、[[wiki/concepts/操作系统/进程同步与通信\|进程同步与通信]]、[[wiki/concepts/操作系统/死锁\|死锁]] |
| 内存管理 | [[wiki/concepts/操作系统/内存管理\|内存管理]]、[[wiki/concepts/操作系统/内存管理概述\|内存管理概述]]、[[wiki/concepts/操作系统/分页存储管理\|分页存储管理]]、[[wiki/concepts/操作系统/分段存储管理\|分段存储管理]]、[[wiki/concepts/操作系统/虚拟内存\|虚拟内存]]、[[wiki/concepts/操作系统/虚拟内存与磁盘调度\|虚拟内存与磁盘调度]] |
| 文件系统 | [[wiki/concepts/操作系统/文件与文件系统\|文件与文件系统]]、[[wiki/concepts/操作系统/文件系统与IO管理\|文件系统与IO管理]]、[[wiki/concepts/操作系统/目录结构\|目录结构]] |
| I/O 与磁盘 | [[wiki/concepts/操作系统/I_O管理概述\|I/O管理概述]]、[[wiki/concepts/操作系统/缓冲技术\|缓冲技术]]、[[wiki/concepts/操作系统/磁盘调度\|磁盘调度]]、[[wiki/concepts/操作系统/磁盘空间管理\|磁盘空间管理]] |

## 做题场景

| 题型 | 入口 | 提醒 |
|---|---|---|
| PV 同步互斥 | [[wiki/concepts/操作系统/进程同步与通信\|进程同步与通信]] | 先找共享资源和同步关系 |
| 死锁判断 | [[wiki/concepts/操作系统/死锁\|死锁]] | 四个必要条件一起看 |
| 页面置换 | [[wiki/concepts/操作系统/虚拟内存\|虚拟内存]] | 画驻留集，逐次统计缺页 |

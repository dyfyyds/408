---
type: concept
title: "TCP拥塞控制"
complexity: advanced
domain: "计算机网络"
aliases:
  - 慢启动
  - 拥塞避免
  - 快速重传
  - 快速恢复
created: 2026-07-04
updated: 2026-07-14
tags:
  - concept
  - "408"
  - 计算机网络
status: developing
related:
  - "[[TCP协议]]"
sources:
  - ".raw/408/教材PDF/27王道《计算机网络》高清带书签.pdf"
---

# TCP拥塞控制

## Definition

TCP 拥塞控制通过调节拥塞窗口 `cwnd` 控制注入网络的数据量，避免网络过载。

## How It Works

- 慢启动：`cwnd` 指数增长，直到达到慢启动门限 `ssthresh`。
- 拥塞避免：`cwnd` 线性增长。
- 超时：`ssthresh=cwnd/2`，`cwnd` 回到 1 MSS。
- 三个重复 ACK：快速重传，通常进入快速恢复。

## Exam Focus

- 根据轮次画 `cwnd` 变化。
- 区分流量控制和拥塞控制。
- 超时与重复 ACK 对窗口的影响不同。

## Common Pitfalls

- 接收窗口 `rwnd` 是流量控制，拥塞窗口 `cwnd` 是拥塞控制。
- 发送窗口通常取 `min(rwnd,cwnd)`。

## Connections

- [[TCP协议]]

---
type: concept
title: "DHCP"
complexity: intermediate
domain: "计算机网络"
aliases:
  - 动态主机配置协议
created: 2026-07-04
updated: 2026-07-14
tags:
  - concept
  - "408"
  - 计算机网络
status: developing
related:
  - "[[应用层协议]]"
  - "[[UDP协议]]"
  - "[[IP地址与子网划分]]"
sources:
  - ".raw/408/教材PDF/27王道《计算机网络》高清带书签.pdf"
---

# DHCP

## Definition

DHCP 动态分配主机网络配置，包括 IP 地址、子网掩码、默认网关和 DNS 服务器。

## How It Works

典型过程：Discover、Offer、Request、Ack。

- 客户端端口 68，服务器端口 67。
- 基于 UDP。
- 可通过租期管理地址回收。

## Exam Focus

- DORA 四步过程。
- 广播报文的使用场景。
- DHCP 与静态 IP 配置区别。

## Common Pitfalls

- 初始阶段客户端没有 IP，常使用广播。
- DHCP 分配的不只是 IP 地址，还包括网关、DNS 等参数。

## Connections

- [[UDP协议]]
- [[IP地址与子网划分]]

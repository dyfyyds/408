---
type: concept
title: "DNS"
complexity: intermediate
domain: "计算机网络"
aliases:
  - 域名系统
created: 2026-07-04
updated: 2026-07-04
tags:
  - concept
  - 408
  - 计算机网络
status: developing
related:
  - "[[应用层协议]]"
  - "[[UDP协议]]"
sources:
  - ".raw/408/教材PDF/27王道《计算机网络》高清带书签.pdf"
---

# DNS

## Definition

DNS 将域名解析为 IP 地址，是分布式、层次化的应用层服务。

## How It Works

- 层次：根域名服务器、顶级域名服务器、权限域名服务器、本地域名服务器。
- 查询：递归查询、迭代查询。
- 常用 UDP 53，区域传送等场景可用 TCP。

## Exam Focus

- 域名解析过程。
- 递归与迭代查询区别。
- DNS 缓存作用。

## Common Pitfalls

- 本地域名服务器不属于层次结构的固定一层，但常参与解析。
- DNS 是应用层协议，但通常使用 UDP。

## Connections

- [[应用层协议]]
- [[UDP协议]]

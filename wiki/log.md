---
type: meta
title: "Operation Log"
updated: 2026-07-20
tags:
  - meta
  - log
status: evergreen
related:
  - "[[index]]"
  - "[[hot]]"
  - "[[overview]]"
  - "[[sources/_index]]"
---

# Operation Log

Navigation: [[index]] | [[hot]] | [[overview]]

Append-only. New entries go at the TOP. Never edit past entries.

---

## 2026-07-20 asset | 补充字扩展教材样例图

- Source: [[.raw/408/教材PDF/27王道《计算机组成原理》高清带书签.pdf#page=110|王道计组教材图 3.13]]；用户提供的字扩展教材截图
- Created: `wiki/resources/计算机组成原理/存储系统/主存与CPU连接/主存与CPU连接-字扩展连接图3.13-2026-07-20.png`（仅作页面展示，不在 `.raw` 重复归档）
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/主存与CPU连接#字扩展：增加存储字的数量|主存与CPU连接：字扩展]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 嵌入 4 片 $16K\times8$ 位 RAM 构成 $64K\times8$ 位存储器的连接图，并解释片内地址、2-4 译码片选、共用数据线和低有效片选端。
- Key exam value: 能从连接图区分片内地址与片选地址，并由 $A_{15}A_{14}$ 直接写出每片地址范围。
- Next: 补充字位同时扩展教材图，完成三种扩展方式的图示闭环。

---

## 2026-07-20 asset | 补充位扩展教材样例图

- Source: [[.raw/408/教材PDF/27王道《计算机组成原理》高清带书签.pdf#page=110|王道计组教材图 3.12]]；用户提供的位扩展教材截图
- Created: `wiki/resources/计算机组成原理/存储系统/主存与CPU连接/主存与CPU连接-位扩展连接图3.12-2026-07-20.png`（仅作页面展示，不在 `.raw` 重复归档）
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/主存与CPU连接#位扩展：增加每个存储字的位数|主存与CPU连接：位扩展]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 嵌入 8 片 $8K\times1$ 位 RAM 构成 $8K\times8$ 位存储器的连接图，并解释地址线、控制线并联和数据线分位连接。
- Key exam value: 能从连接图识别位扩展，明确 8 片同时输出 $D_0\sim D_7$，字长扩大但地址范围不变。
- Next: 补充字扩展和字位同时扩展的教材连接图，完成三类扩展图示对比。

---

## 2026-07-20 asset | 补充主存与 CPU 教材模型图

- Source: [[.raw/408/教材PDF/27王道《计算机组成原理》高清带书签.pdf#page=109|王道计组教材图 3.11]]；用户提供的教材模型截图
- Created: `wiki/resources/计算机组成原理/存储系统/主存与CPU连接/主存与CPU连接-教材模型图3.11-2026-07-20.png`（仅作页面展示，不在 `.raw` 重复归档）
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/主存与CPU连接|主存与CPU连接]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 在连接原理开头嵌入教材模型图，并解释 MAR、MDR、地址总线、数据总线和读写控制线的方向。
- Key exam value: 通过模型图区分数据通路与控制通路，避免把读控制线误认为主存返回数据的线路。
- Next: 可继续补充位扩展、字扩展和字位同时扩展的教材连接图。

---

## 2026-07-20 ingest | 补全主存与 CPU 的连接

- Source: [[.raw/408/教材PDF/27王道《计算机组成原理》高清带书签.pdf#page=109|王道计组教材 §3.3.1]]至[[.raw/408/教材PDF/27王道《计算机组成原理》高清带书签.pdf#page=111|§3.3.2]]；用户提供图 3.11 教材截图，仅用于定位，不重复归档
- Created: —
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/主存与CPU连接|主存与CPU连接]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 补充地址、数据和控制总线的方向与作用，MAR/MDR 读写流程，SRAM/ROM/DRAM 控制信号差异，以及位扩展、字扩展、字位同时扩展的教材例题。
- Key exam value: 能从总线位数判断寻址空间和传送宽度，并按目标规格计算芯片数、片内地址线、译码片选线与每片地址范围。
- Next: 补充 3.3 节芯片扩展选择题与连接图练习。

---

## 2026-07-20 clarify | 解释四体交叉的四个启动间隔

- Source: 用户对 2015 统考真题中“为什么要隔四个周期”的追问
- Created: —
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/多模块存储器#题 1：2015 统考真题，四体交叉存储器的访存冲突|多模块存储器：模块冲突真题]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 增加 $M_0\to M_1\to M_2\to M_3\to M_0$ 启动时间轴，区分“中间 3 个请求”“相差 4 个 $r$”和“4 个存储周期 $T$”。
- Key exam value: 用启动时刻而非地址距离判断冲突，明确 8008 到 8004 相差 $4r=T$，8004 到 8000 仅相差 $r<T$。
- Next: 遇到一般 $m$ 体交叉题，统一检查同模块请求是否满足启动间隔 $\Delta t\ge T$。

---

## 2026-07-20 exercise | 多模块存储器真题补充

- Source: `.raw/408/练习题/多模块存储器-2015真题模块冲突34-2026-07-20.png`、`.raw/408/练习题/多模块存储器-2017真题跨界存取35-2026-07-20.png`、`.raw/408/练习题/多模块存储器-2022真题内存条行缓冲37-2026-07-20.png`
- Created: `wiki/resources/计算机组成原理/存储系统/多模块存储器/` 下 3 张真题展示附件
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/多模块存储器|多模块存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 增补 2015 年四体交叉模块冲突、2017 年非对齐 double 跨块访问、2022 年内存条容量与 DRAM 行缓冲三道统考真题及逐步解析。
- Key exam value: 将模块映射、时间间隔、总线宽度、地址对齐、DRAM 地址复用和行缓冲容量串成可迁移的解题流程。
- Next: 继续补充含存取周期 $T$、总线周期 $r$ 的轮流启动定量题。

---

## 2026-07-20 improve | 细化同时启动方式

- Source: 用户针对现有[[wiki/concepts/计算机组成原理/第3章 存储系统/多模块存储器#同时启动方式|同时启动方式]]段落的可读性反馈
- Created: —
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/多模块存储器|多模块存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 补充并行位宽公式、同地址多片读出流程、$8\times(16M\times8)$ 的组织与容量计算、8 Byte 对齐块及跨界判断实例。
- Key exam value: 明确同时启动属于位扩展，能正确区分地址数量、数据位宽和总容量，并通过具体地址判断一次访问还是两次访问。
- Next: 可结合芯片地址线、数据线数量和存储器扩展题继续练习。

---

## 2026-07-20 ingest | 补充轮流启动时序图

- Source: `.raw/408/计算图/多模块存储器-轮流启动时序示意-2026-07-20.png`
- Created: `wiki/resources/计算机组成原理/存储系统/多模块存储器/多模块存储器-轮流启动时序示意-2026-07-20.png`
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/多模块存储器|多模块存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 在轮流启动条件旁补入时序图，说明模块存取周期 $T$、总线传送周期 $r$、错峰返回数据及同模块再次启动的约束。
- Key exam value: 从时序图理解 $mr\ge T$ 和 $T+(n-1)r$，避免把模块存取时间误写成 $r$，或认为多个返回结果可以同时占用单总线。
- Next: 结合具体 $T$、$r$ 与访问字数计算所需模块数和流水读取时间。

---

## 2026-07-20 ingest | 补充交叉编址计算图

- Source: `.raw/408/计算图/多模块存储器-交叉编址*.png` 下 3 张用户原创计算图
- Created: `wiki/resources/计算机组成原理/存储系统/多模块存储器/` 下 3 张交叉编址展示附件
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/多模块存储器|多模块存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 补入低位交叉的商余数计算图、十进制全局地址分布图和“高 3 位模块内地址、低 2 位模块号”的二进制地址图。
- Key exam value: 通过图示固化 $A\bmod m$ 选择模块、$\lfloor A/m\rfloor$ 选择模块内地址，避免与连续编址的除数和商余数含义混淆。
- Next: 结合访问步长判断模块冲突，并练习轮流启动时间计算。

---

## 2026-07-20 fix | 修复多模块存储器图片嵌入

- Source: `.raw/408/计算图/` 下 3 张多模块存储器计算图
- Created: `wiki/resources/计算机组成原理/存储系统/多模块存储器/` 下 3 张展示附件
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/多模块存储器|多模块存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 将无法被 Obsidian 索引的 `.raw` 图片嵌入改为 `wiki/resources/` 下的可索引附件，同时保留原始归档。
- Key exam value: 连续编址的商余数、十进制映射和二进制地址划分图可以在概念页中直接显示。
- Next: 后续原始图片继续归档到 `.raw`，需要嵌入笔记的展示附件放入 `wiki/resources/`。

---

## 2026-07-20 ingest | 多模块存储器知识与计算图

- Source: [[.raw/408/教材PDF/27王道《计算机组成原理》高清带书签.pdf#page=97|王道计组教材 §3.2.3]]至[[.raw/408/教材PDF/27王道《计算机组成原理》高清带书签.pdf#page=99|轮流启动与同时启动]]；`.raw/408/计算图/` 下 3 张用户原创计算图
- Created: [[wiki/concepts/计算机组成原理/第3章 存储系统/多模块存储器|多模块存储器]]
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/主存储器|主存储器]]、[[wiki/concepts/计算机组成原理/第3章 存储系统/_index|存储系统概念索引]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 整理连续编址、低位交叉、商余数地址映射、二进制地址划分、轮流启动时间公式、模块冲突、同时启动和地址对齐。
- Key exam value: 固化“先判编址方式，再选除数和商余数含义”的地址计算流程，并把流水吞吐率、冲突和并行位宽题串成一条复习线索。
- Next: 可继续补充含访问步长的模块冲突题和多模块存储器时间计算真题。

---

## 2026-07-20 ingest | ROM、Flash 与 SSD 知识补全

- Source: [[.raw/408/教材PDF/27王道《计算机组成原理》高清带书签.pdf#page=97|王道计组教材 §3.2.2]]、[[.raw/408/教材PDF/27王道《计算机组成原理》高清带书签.pdf#page=116|王道计组教材 §3.4.2]]
- Created: [[wiki/concepts/计算机组成原理/第3章 存储系统/非易失性存储器|非易失性存储器]]
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/主存储器|主存储器]]、[[wiki/concepts/计算机组成原理/第3章 存储系统/外部存储器|外部存储器]]、[[wiki/concepts/计算机组成原理/第3章 存储系统/_index|存储系统概念索引]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 整理 ROM 分类、Flash 特点、BIOS 存储、SSD 与 Flash 的关系、页/块组织、随机写变慢原因和动态/静态磨损均衡。
- Key exam value: 建立“ROM 分类 -> Flash 读写不对称 -> SSD 页写块擦与寿命管理”的完整判断题链路。
- Next: 可继续结合教材习题补充 ROM/Flash/SSD 判断题和 SSD 写放大计算语境。

---

## 2026-07-20 index | 统一计组教材 PDF 入口

- Source: [[.raw/408/教材PDF/27王道《计算机组成原理》高清带书签.pdf|27王道《计算机组成原理》教材 PDF]]
- Created: 无
- Updated: [[wiki/408专业课/计算机组成原理/_index|计算机组成原理索引]]、[[wiki/concepts/计算机组成原理/_index|计算机组成原理概念索引]]、第 1 至第 7 章概念索引、[[hot]]
- Subject: 计算机组成原理
- Content: 为 9 个计组索引页统一添加指向库内教材 PDF 的 `sources` wikilink，并同步更新索引日期。
- Key exam value: 从任一计组章节索引均可直接回到同一份教材原文，避免继续使用外部路径或错误副本。
- Next: 可继续将计组概念页中残留的旧外部教材路径统一替换为该库内链接。

---

## 2026-07-20 fix | 主存储器素材链接显示

- Source: [[.raw/408/教材PDF/27王道《计算机组成原理》高清带书签.pdf|王道计组教材]]、`.raw/408/练习题/` 下 7 张主存储器练习截图
- Created: 无
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/主存储器|主存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 将 `sources` 中不可点击的长路径文本改为带简短别名的库内 wikilink，并合并重复教材路径的章节说明。
- Key exam value: 可从主存储器页面直接回看教材和题目原图，来源属性保持紧凑、可读。
- Next: 后续新增练习素材继续使用“库内链接 + 简短题号别名”的来源格式。

---

## 2026-07-19 exercise | DRAM 位平面与内存条总容量

- Source: `.raw/408/练习题/主存储器-DRAM位平面内存条容量练习20-2026-07-19.png`
- Created: 无
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/主存储器|主存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 添加内存条容量练习：16 个 DRAM 芯片，每片 4 个位平面，每个位平面阵列为 $4096\times4096$，计算总容量。
- Key exam value: 固化“行数 × 列数 × 位平面数 = 单片 bit 容量，再乘芯片数并换算 MB”的容量计算链。
- Next: 可继续补位扩展、字扩展和芯片片选题。

---

## 2026-07-19 fix | 补全 DRAM 判断题选项

- Source: 用户反馈截图；`.raw/408/练习题/主存储器-DRAM4Mx4判断练习21-2026-07-19.png`
- Created: 无
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/主存储器|主存储器]]
- Subject: 计算机组成原理·存储系统
- Content: 补全题 5 的 A-D 选项，避免只保留“判断错误项”和解析而缺少可独立作答的题干。
- Key exam value: 复习时可以直接根据选项判断行地址引脚、刷新计数器位数、行缓冲器容量和数据引脚数。
- Next: 后续补题时保留必要选项，解析可以提炼但题干要能独立作答。

---

## 2026-07-19 exercise | DRAM 统考真题补充

- Source: `.raw/408/练习题/主存储器-DRAM真题容量引脚练习32-2026-07-19.png`、`.raw/408/练习题/主存储器-DRAM真题行列与内存条练习36-37-2026-07-19.png`
- Created: 无
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/主存储器|主存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 添加 2014、2018、2022 统考 DRAM 练习，覆盖单片芯片引脚计算、行列数优化、内存条容量/总线宽度/行缓冲区判断。
- Key exam value: 把 DRAM 地址复用题从单片容量扩展到统考真题语境，强调“问芯片还是问存储器”“地址引脚复用后不是行列地址位数相加”“刷新按行计算”。
- Next: 可继续补主存芯片扩展与片选译码题，将单片容量题连接到 [[wiki/concepts/计算机组成原理/第3章 存储系统/主存与CPU连接|主存与CPU连接]]。

---

## 2026-07-19 exercise | DRAM 地址复用与行缓冲器练习

- Source: `.raw/408/练习题/主存储器-DRAM地址复用引脚练习09-2026-07-19.png`、`.raw/408/练习题/主存储器-DRAM地址引脚增加练习19-2026-07-19.png`、`.raw/408/练习题/主存储器-DRAM4Mx4判断练习21-2026-07-19.png`
- Created: 无
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/主存储器|主存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 添加三道 DRAM 练习题，覆盖地址复用下地址/数据引脚总数、地址引脚增加对容量倍数的影响，以及 $4M\times4$ 位 DRAM 的地址引脚、刷新计数器、数据引脚和行缓冲器容量判断。
- Key exam value: 区分普通 $N\times W$ 位容量题与 DRAM 地址复用题，避免把复用地址引脚按普通地址线直接相加，或把行缓冲器容量误算为单列宽度。
- Next: 可继续补主存芯片字扩展、位扩展和片选译码练习。

---

## 2026-07-19 exercise | 主存储器地址线与数据线练习

- Source: `.raw/408/练习题/主存储器-地址线数据线练习-2026-07-19.png`
- Created: 无
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/主存储器|主存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 添加两道存储芯片容量题：$1024\times8$ 位 SRAM 的地址/数据引脚总数，$32K\times16$ 位存储器的地址线和数据线根数。
- Key exam value: 固化 $N\times W$ 位题型模板：地址线数看可寻址单元数 $N$，数据线数看每个单元宽度 $W$。
- Next: 可继续补主存芯片位扩展、字扩展和片选信号练习题。

---

## 2026-07-18 refactor | 算法题单与题解分离

- Source: 现有 `wiki/408专业课/数据结构/算法题单.md`。
- Created: [[wiki/408专业课/数据结构/算法题|算法题内容]]
- Updated: [[wiki/408专业课/数据结构/算法题单|算法题单]]、[[wiki/408专业课/数据结构/_index|数据结构索引]]、[[hot]]
- Subject: 408专业课·数据结构
- Content: 将 14 道算法题的完整思路、复杂度、递归/迭代解法和 C++ 代码迁移到算法题内容页，题单改为单一 Markdown 索引表，并使用稳定块 ID 建立跳转。
- Key exam value: 题目清单与题解内容分离，题单便于扫描和定位，算法题页便于连续复习和追加代码。
- Next: 后续新增题目时先写算法题内容，再同步题单索引。

## 2026-07-18 supplement | SRAM 与 DRAM 特征对比

- Source: 用户提供的教材表 3.1“SRAM 和 DRAM 各自的特点”。
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/主存储器|主存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 增加 SRAM/DRAM 对比表，覆盖存储器件、破坏性读出、刷新、地址发送方式、速度、集成度、成本和主要用途。
- Key exam value: 通过“触发器/电容、是否刷新、是否破坏性读出、Cache/主存”四组关键词快速完成判断题。
- Next: 继续整理 SRAM/DRAM 与主存芯片扩展的综合题。

## 2026-07-18 supplement | DRAM 刷新、阵列优化与 SDRAM

- Source: 用户提供的王道教材截图；DRAM 地址复用、刷新机制、阵列设计优化、行缓冲器和 SDRAM 相关内容。
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/主存储器|主存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 补充 DRAM 按行刷新、刷新计数器、行列设计公式、行缓冲器对突发传输的支持，以及同步 DRAM 的时钟工作方式。
- Key exam value: 刷新次数看行数，刷新计数器位数看行地址位数；阵列设计同时比较地址引脚数和刷新开销；同一行连续访问可利用行缓冲器提高有效带宽。
- Next: 继续补充存储芯片扩展、片选和位扩展计算。

## 2026-07-18 refine | DRAM 地址复用教材校正

- Source: 用户提供的王道教材图 3.6 文字说明。
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/主存储器|主存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 校正 DRAM 地址复用页，补充 11 个地址引脚、RAS/CAS 分时控制、D1~D4 数据端口、WE/OE 低电平有效、三维存储阵列和 4M×4 容量关系。
- Key exam value: 能从芯片型号、地址引脚数和数据引脚数判断行列地址位数、并行数据宽度与总容量。
- Next: 继续补充 DRAM 刷新方式和存储芯片扩展计算。

## 2026-07-18 supplement | 单译码与双译码图解

- Source: 用户提供的单译码、双译码手绘图；王道《计算机组成原理》第 3 章存储芯片结构。
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/主存储器|主存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 在主存储器页补充单译码和双译码的画图解释、地址线数量关系、行列地址拆分和交叉选址过程。
- Key exam value: 单译码用 $n$ 位地址产生 $2^n$ 条输出；双译码用 $r$ 位行地址和 $c$ 位列地址形成 $2^r\times2^c$ 存储矩阵，且 $r+c=n$。
- Next: 继续补充芯片容量、字扩展、位扩展和地址线/数据线连接题。

## 2026-07-18 refine | 主存储器删除教材截图

- Source: 用户指定删除的 SRAM/DRAM 与存储芯片组成教材截图。
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/主存储器|主存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 删除两张教材图片的正文嵌入和对应派生素材，保留并提炼存储元、刷新、读出、速度、容量、译码器、I/O 电路和控制信号等重要知识点。
- Key exam value: 用“触发器/电容、是否刷新、是否破坏性读出、Cache/主存用途”区分 SRAM 与 DRAM；根据结构文字判断存储体、地址译码和读写通路。
- Next: 继续补充存储芯片容量、地址线/数据线扩展和存储器条数计算。

## 2026-07-18 refactor | 存储器总览与主存储器分工

- Source: 用户提供的王道教材截图；王道《计算机组成原理》第 3 章第 3.2.1 节“半导体随机存取存储器”。
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/存储器|存储器]]、[[wiki/concepts/计算机组成原理/第3章 存储系统/主存储器|主存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 将存储器总览页收敛为基本概念、分类、存储层次和导航；将 SRAM/DRAM、存储芯片组成、单译码/双译码、I/O 电路和控制信号补充到主存储器页，并归档教材图。
- Key exam value: 看到“快/贵/不刷新”判断 SRAM，看到“容量大/需刷新/破坏性读出”判断 DRAM；根据芯片结构图区分地址译码、存储体和 I/O 读写电路。
- Next: 继续在主存储器页补充芯片容量、地址线/数据线扩展和存储器条数计算。

## 2026-07-18 supplement | 存储器主要性能指标

- Source: 用户提供的教材截图；王道《计算机组成原理》第 3 章第 3.1.4 节“存储器的主要性能指标”。
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/存储器|存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 补充存取时间、存储周期、恢复时间、存取频率的定义、公式和教材图 3.4 的时间轴，并说明破坏性读出对存储周期的影响。
- Key exam value: 区分“一次操作耗时”的 $T_a$ 与“连续两次操作最小间隔”的 $T_m$，通过 $T_m=T_a+T_r$ 判断恢复时间和连续访问能力。
- Next: 结合主存、DRAM 和存储芯片题继续练习性能指标的计算与比较。

## 2026-07-18 supplement | 主存储器基本组成框图

- Source: 用户提供的教材图 3.1；王道《计算机组成原理》第 3 章第 3.1.2 节。
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/存储器|存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 归档并嵌入主存储器基本组成框图，补充存储体、地址译码器、MAR/MDR、地址线、数据线和读写控制电路的职责。
- Key exam value: 根据框图判断数据流向、控制关系，并区分地址线决定寻址范围、数据线决定传输宽度。
- Next: 继续补充主存芯片容量、地址译码和主存与 CPU 的连接计算。

## 2026-07-18 refactor | 存储器总览与层次结构分工

- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/存储器|存储器]]
- Subject: 计算机组成原理·存储系统
- Content: 收敛重复内容，删除独立的存储器层次结构页，将层次关系、局部性原理和层次访问流程合并到存储器总览页。
- Key exam value: 避免同一组“速度、容量、成本、局部性”结论在两页重复维护，复习路径更清晰。
- Next: 后续可继续检查存储器总览页中 Cache 和虚拟存储器的重复段落。

## 2026-07-18 supplement | 主存储器的组成和基本操作

- Source: 用户提供的教材截图；王道《计算机组成原理》第 3 章第 3.1.2 节。
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/主存储器|主存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 补充存储元、存储单元、地址、字节编址、MAR/MDR、主存读写流程、地址范围和数据线并行传输宽度。
- Key exam value: 根据地址线位数计算寻址范围，根据数据线位数计算一次传送的字节数，并区分 MAR 与 MDR 的位数来源。
- Next: 继续补充主存芯片容量、地址线/数据线扩展和主存与 CPU 的连接方法。

## 2026-07-17 supplement | 存储器按存储元件分类

- Source: 教材第三章存储系统·按存储元件分类
- Updated: [[wiki/concepts/计算机组成原理/第3章 存储系统/存储器|存储器]]、[[hot]]
- Subject: 计算机组成原理·存储系统
- Content: 优化存储器按半导体器件、磁性材料、光介质分类的描述；继续补充按存取方式、信息可更改性和信息可保存性分类，整理随机存取、顺序存取、直接存取、相联存取、可读可写、只读、易失性、非易失性、破坏性读出和非破坏性读出的区分。
- Key exam value: 区分“存储元件”“存取方式”“可更改性”“可保存性”“作用层次”五条分类轴，避免把半导体、主存、Cache、辅存、RAM、ROM、易失性等概念混在一起。
- Next: 可继续补充 RAM/ROM、SRAM/DRAM 与辅存介质对照题。

## 2026-07-16 supplement | 大小端典型真题

- Source: 用户提供的 2016、2018 统考真题截图；教材第 2 章第 2.3.4 节。
- Updated: [[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/数据的宽度和存储|数据的宽度和存储]]、[[hot]]
- Content: 补充 double 小端地址定位、32 位负数立即数补码转换和小端机器代码拼接过程。
- Key exam value: 先拆字节、再按地址排列；指令题先区分指令前缀与多字节立即数。

## 2026-07-16 supplement | 数据的宽度和存储

- Source: 王道《计算机组成原理》第 2 章第 2.3.4 节，教材第 71 页；第二章章节 PDF 与 XMind。
- Updated: [[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/数据的宽度和存储|数据的宽度和存储]]、[[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/_index|第2章概念索引]]、[[wiki/408专业课/计算机组成原理/数据的表示和运算|数据的表示和运算章节入口]]、[[hot]]
- Content: 新增数据宽度、字节编址、大端/小端存储、边界对齐、结构体填充、数组步长和综合判断模板。
- Key exam value: 以 12345678H 为例掌握低地址到高地址的字节排列，并区分端序判断与首地址对齐判断。

## 2026-07-15 supplement | 2021/2022 统考 IEEE 754 真题

- Source: `.raw/408/计算机组成原理/2021年IEEE754精确表示真题.png`、`.raw/408/计算机组成原理/2022年IEEE754单精度转换真题.png`
- Updated: [[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/浮点数的表示|浮点数的表示]]、[[hot]]
- Subject: 计算机组成原理·数据的表示和运算
- Content: 补充 2021 年 IEEE 754 精确表示判断题和 2022 年 $-0.4375$ 转 IEEE 754 单精度题。
- Key exam value: 建立“有限二进制小数判定”和“小数规格化 → 阶码偏置 → 尾数字段拼接”的做题路径。
- Next: 可继续补充 2023、2025 统考 IEEE 754 转换题。

---

## 2026-07-15 supplement | 教材 IEEE 754 浮点数转换例题

- Source: 教材第 2 章考点追踪例 2.5、例 2.6
- Updated: [[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/浮点数的表示|浮点数的表示]]、[[hot]]
- Subject: 计算机组成原理·数据的表示和运算
- Content: 补充 IEEE 754 隐藏位、偏置值、规格化单/双精度真值公式、阶码可用范围，以及教材例 2.5 十进制 $-8.25$ 转 IEEE 754 单精度和例 2.6 `C6400000H` 还原真值。
- Key exam value: 建立“符号位 → 阶码偏置 → 隐藏位尾数 → 十六进制拼接/还原”的 IEEE 754 解题模板。
- Next: 可继续补充 2011、2013、2020、2022、2023、2025 统考浮点转换真题。

---

## 2026-07-15 supplement | 2010/2014 统考补码溢出判断真题

- Source: `.raw/408/计算机组成原理/2010-2014年补码溢出判断真题.png`
- Updated: [[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/补码溢出判断|补码溢出判断]]、[[hot]]
- Subject: 计算机组成原理·数据的表示和运算
- Content: 补充 2010 年 8 位补码乘法溢出判断和 2014 年表达式溢出判断，并给出真值范围法、快速估算法和符号位法。
- Key exam value: 强化“先写补码范围，再看真实结果是否越界”的溢出判断主线。
- Next: 可继续补充进位异或法与符号位法的同题互证。

---

## 2026-07-15 supplement | 2009/2018 统考定点数运算真题

- Source: `.raw/408/计算机组成原理/2009年C语言整型提升真题.png`、`.raw/408/计算机组成原理/2018年补码减法真题.png`
- Updated: [[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/定点数运算|定点数运算]]、[[hot]]
- Subject: 计算机组成原理·数据的表示和运算
- Content: 补充 2009 年 `short + int` 整型提升题和 2018 年 32 位补码减法题；每题给出多种解法。
- Key exam value: 强化“源类型决定扩展方式”和“补码减法可转化为加法/模运算”的选择题判断链路。
- Next: 可继续补充 `unsigned` 混合运算、减法溢出标志位和 `CF/OF` 对比题。

---

## 2026-07-14 supplement | 2013 统考定点数运算真题
- Updated: [[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/定点数运算|定点数运算]] and [[hot]]
- Source: `.raw/408/计算机组成原理/2013年定点数运算真题.png`
- Process: $[x]_{补}=1\ 1110100$ gives $x=-12$; $[y]_{补}=1\ 0110000$ gives $y=-80$; therefore $z=2x+y/2=-24-40=-64$.
- Methods: decimal restoration, sign-extension plus shift verification, and range judgment. The 8-bit complement is `11000000`; final answer: A.

## 2026-07-14 supplement | 2018 统考移位真题

- Updated: [[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/定点数运算|定点数运算]]、[[hot]]
- Content: 补充机器数 `1101 1000` 逻辑右移和算术右移的逐位过程、补位规则、真值复核和选项判断。
- Answer: 逻辑右移为 `0110 1100`，算术右移为 `1110 1100`，对应选项 B。

---

## 2026-07-13 supplement | 定积分理论结论与手写题过程

- Source: `.raw/数学/43.jpg` 至 `.raw/数学/50.jpg`（定积分手写练习与结论补充）
- Updated: [[wiki/数学/定积分的性质与中值定理|定积分的性质与中值定理]]、[[wiki/数学/定积分的计算|定积分的计算]]、[[wiki/数学/定积分典型题|定积分典型题]]、[[wiki/数学/_index|数学索引]]、[[hot]]
- Content: 补充对称区间拆分、区间反射平均化、带权反射、三角函数区间变换和周期积分的理论证明；新增换元、分部、绝对值、三角积分、周期和变限极限的完整过程。
- Correction: 明确 `f(cos x)` 在 $[0,\pi]$ 上不能无条件替换为 `f(|cos x|)`，并补充 $(x^2)^{3/2}=|x|^3$、$\sqrt{\cos^2x}=|\cos x|$ 的易错说明。

---

## 2026-07-13 supplement | 定点数的移位运算

- Source: 王道《计算机组成原理》教材第 2.2.2 节（教材 PDF 第 47 页）、`.raw/408/计算机组成原理/第二章 数据的表示和运算.pdf`、`.raw/408/计算机组成原理/计算机组成原理第二章.xmind`
- Updated: [[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/定点数运算|定点数运算]]、[[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/_index|第2章概念索引]]、[[wiki/408专业课/计算机组成原理/数据的表示和运算|数据的表示和运算]]、[[hot]]
- Content: 补齐逻辑左移、逻辑右移、算术左移、算术右移、循环移位辨析、补码负数右移、`CF/OF`、溢出和精度损失。
- Tips: 新增“表示范围判断”和“被舍去数字判断”两种移位溢出方法，并用 4 位补码 `0101`、`1101` 左移例题说明。
- Key examples: `0001 << 1 = 0010`、`0001 >> 1 = 0000`、4 位补码 `1101` 算术右移为 `1110`，逻辑右移为 `0110`。

---

## 2026-07-13 supplement | ALU 概念与教材结构图

- Source: `.raw/408/教材PDF/27王道《计算机组成原理》高清带书签.pdf`、`.raw/408/计算机组成原理/第二章 数据的表示和运算.pdf`、`.raw/408/计算机组成原理/计算机组成原理第二章.xmind`
- Updated: [[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/算术逻辑单元|算术逻辑单元]]、[[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/基本运算部件|基本运算部件]]、[[hot]]
- Added: `wiki/resources/计算机组成原理/基本运算部件/ALU_basic_structure.png`、`ALU_one_bit_structure.png`
- Content: 补齐 ALU 总体结构、一位 ALU 的逻辑门/全加器/MUX、`ALUOp` 编码、加减法实现和 `ZF/SF/CF/OF` 标志位判断。

---

## 2026-07-11 ingest | 基本运算部件与教材电路原图

- Source: `.raw/408/教材PDF/27王道《计算机组成原理》高清带书签.pdf` 第 44-47 页、`.raw/408/计算机组成原理/第二章 数据的表示和运算.pdf`、`.raw/408/计算机组成原理/计算机组成原理第二章.xmind`
- Created: [[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/基本运算部件|基本运算部件]]、`wiki/resources/计算机组成原理/基本运算部件/`
- Updated: [[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/算术逻辑单元|算术逻辑单元]]、[[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/_index|第2章概念索引]]、[[wiki/concepts/计算机组成原理/_index|机组概念索引]]、[[wiki/408专业课/计算机组成原理/_index|机组索引]]、[[wiki/concepts/_index|概念索引]]、[[wiki/index|总索引]]、[[hot]]、[[log]]
- Subject: 计算机组成原理·数据的表示和运算
- Key exam value: 补齐 2.2.1 基本运算部件的逻辑门、全加器、串行/先行进位、带标志加法器、ALU 和移位器，并保留教材原图供对照。
- Next: 继续从教材 2.2.2 定点数移位运算和 2.2.3 定点数加减运算补充题型推导。

---

## 2026-07-11 supplement | C语言整数类型及类型转换页面重构

- Source: `.raw/408/教材PDF/27王道《计算机组成原理》高清带书签.pdf`、`.raw/408/计算机组成原理/第二章 数据的表示和运算.pdf`、`.raw/408/计算机组成原理/计算机组成原理第二章.xmind`
- Created: 无
- Updated: [[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/C语言中的整数类型及类型转换|C语言中的整数类型及类型转换]]、[[hot]]、[[log]]
- Subject: 计算机组成原理·数据的表示和运算
- Key exam value: 将 C 语言整型规则与机器级位操作统一起来，补齐整型提升、混合类型转换、零扩展/符号扩展、位截断、移位和浮点转换，并修正 2017 真题十进制结果。
- Next: 继续用第二章真题练习“先判断类型转换，再写机器数，最后解释真值”的三步流程。

---

## 2026-07-10 supplement | LeetCode 145 二叉树的后序遍历

- Source: 用户提供的 LeetCode 145 递归与单栈迭代通过截图
- Created: 无
- Updated: [[wiki/408专业课/数据结构/算法题单|算法题单]]、[[hot]]、[[log]]
- Subject: 数据结构·树与二叉树
- Key exam value: 补齐二叉树后序遍历的递归模板和单栈迭代模板，理解 `pre` 如何标记最近访问节点并避免重复进入右子树。
- Next: 对照题单中的 LeetCode 144、94、145，独立默写三种遍历的递归顺序及迭代控制条件。

---

## 2026-07-10 supplement | LeetCode 94 二叉树的中序遍历

- Source: 用户提供的 LeetCode 94 通过截图与代码
- Created: 无
- Updated: [[wiki/408专业课/数据结构/算法题单|算法题单]]、[[hot]]、[[log]]
- Subject: 数据结构·树与二叉树
- Key exam value: 同题对照递归调用栈与显式辅助栈，掌握中序遍历“左链入栈、弹栈访问、转向右子树”的迭代模板，并能按树高分析空间复杂度。
- Next: 可继续补充 LeetCode 145 后序遍历，对比其迭代过程与前序、中序的差异。

---

## 2026-07-10 supplement | 定积分定义、定理证明与推理补全

- Source: `.raw/数学/34.jpg-42.jpg` 与本次缺口复核
- Created: 无
- Updated: [[wiki/数学/定积分|定积分]]、[[wiki/数学/定积分的性质与中值定理|定积分的性质与中值定理]]、[[wiki/数学/积分上限函数|积分上限函数]]、[[wiki/数学/定积分的计算|定积分的计算]]、[[wiki/数学/定积分典型题|定积分典型题]]、[[hot]]、[[log]]
- Subject: 数学·高数
- Key exam value: 补齐黎曼和与达布判别、狄利克雷函数不可积、积分性质与中值定理、积分上限函数连续可导、牛顿–莱布尼茨、换元分部、周期反射和 Wallis 递推的完整证明链，并增加对应代表题。
- Next: 后续新增高数专题默认按“定义、条件、证明、推论、Tips、例题”六层结构整理，避免再次压缩成纯速查页。

---

## 2026-07-10 ingest | 高数定积分图片 34-42

- Source: `.raw/数学/34.jpg-42.jpg`；34-38 为考研教材内容，39-42 为手写补充
- Created: [[wiki/数学/定积分|定积分]]、[[wiki/数学/定积分的性质与中值定理|定积分的性质与中值定理]]、[[wiki/数学/积分上限函数|积分上限函数]]、[[wiki/数学/定积分的计算|定积分的计算]]、[[wiki/数学/定积分典型题|定积分典型题]]
- Updated: [[wiki/数学/_index|数学索引]]、[[wiki/数学/不定积分|不定积分]]、[[hot]]、[[log]]
- Subject: 数学·高数
- Key exam value: 系统沉淀定积分定义、可积条件、性质与中值定理、变限积分求导、牛顿–莱布尼茨、对称周期、Wallis 公式和黎曼和极限题型。
- Next: 后续从第 43 张图片继续判断是否进入定积分综合题、反常积分或其他章节。

---

## 2026-07-10 supplement | 计算机组成原理 concepts 章节化迁移

- Source: 王道《计算机组成原理》7 章目录与现有机组概念库
- Created: [[wiki/concepts/计算机组成原理/第1章 计算机系统概述/_index|第1章概念索引]]、[[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/_index|第2章概念索引]]、[[wiki/concepts/计算机组成原理/第3章 存储系统/_index|第3章概念索引]]、[[wiki/concepts/计算机组成原理/第4章 指令系统/_index|第4章概念索引]]、[[wiki/concepts/计算机组成原理/第5章 中央处理器/_index|第5章概念索引]]、[[wiki/concepts/计算机组成原理/第6章 总线/_index|第6章概念索引]]、[[wiki/concepts/计算机组成原理/第7章 输入输出系统/_index|第7章概念索引]]
- Updated: [[wiki/index|总索引]]、[[wiki/concepts/_index|概念索引]]、[[wiki/concepts/计算机组成原理/_index|计算机组成原理概念索引]]、[[wiki/408专业课/计算机组成原理/_index|计算机组成原理索引]]、40 个机组概念页
- Subject: 计算机组成原理
- Key exam value: 将文件树、章节入口和做题索引统一到王道教材 7 章结构，可按章节快速定位补码、Cache、寻址方式、数据通路、流水线、总线和 DMA 等高频考点。
- Next: 后续新增机组概念页直接归入对应章节目录，并在章节 `_index.md` 中登记。

---

## 2026-07-10 ingest | C语言中的整数类型及类型转换概念页面

- Source: 27王道《计算机组成原理》第二章2.1.4节与大纲要求
- Updated: [[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/C语言中的整数类型及类型转换|C语言中的整数类型及类型转换]]、[[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/定点数的表示|定点数的表示]]、[[wiki/concepts/计算机组成原理/_index|计算机组成原理概念索引]]、[[hot]]、[[log]]
- Subject: 计算机组成原理
- Key exam value: 新增 C 语言数据类型（位模式补码存储）以及强转扩展物理本质：1) 整理了 char, short, int, long 32位/64位系统字宽及 signed/unsigned 范围；2) 阐明同字长强转（位模式不变，最高位权值符号变）、位扩展（零扩展补0，符号扩展补原符号位，重点解析有符号短整型转长无符号整型时的两步走顺序）、位截断（高位丢弃，极易溢出/变号）机器级物理机理；3) 结合 2017、2019、2024 真题进行详细考点拆解。

---

## 2026-07-10 update | 补码移码互转、无符号数有符号数对比及大小判断汇总

- Source: 用户手写笔记图示与王道教材
- Updated: [[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/定点数的表示|定点数的表示]]、[[hot]]、[[log]]
- Subject: 计算机组成原理
- Key exam value: 在定点数表示小节中进行了五项重大更新：1) 重构并扩充了“无符号整数与有符号整数的表示”一节，补充了寄存器表示原理、应用场景（地址运算/指针表示）、8位最值范围对比，以及4位机器码多码制真值对比、十六进制机器数正负口算判定等考研重难点；2) 扩充了“### (6) 补码与移码的互转及真值推导”小节，演示了定义法与补码最高位取反法两种双向解题过程；3) 新增了五种方法求解补码对应十进制真值的两个具体实例演练；4) 新增并丰富了移码偏置原理、四大核心特点等独立卡片，强调了“定点小数无移码”；5) 新增了“四种编码对比与大小判断规律”卡片，重点归纳负数补反码“数值部分越大，真值越大”的常考（2015真题）秒杀规律。

---

## 2026-07-09 ingest | 定点数与浮点数表示方法

- Source: 27王道《计算机组成原理》第二章2.2.1节与2.3.1节
- Created: [[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/定点数的表示|定点数的表示]]、[[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/浮点数的表示|浮点数的表示]]
- Updated: [[wiki/concepts/计算机组成原理/_index|计算机组成原理概念索引]]、[[hot]]、[[log]]
- Subject: 计算机组成原理
- Key exam value: 补齐了有符号定点数表示中原/反/补/移码的公式和极值，理清了原码补码快速转换判定逻辑与补码能多表示一个最小负数（-128与-1.0）的原因；系统归纳了浮点数规格化（左规、右规、原/补码规格化判定的首位规律以及补码规格化中的-1/2与-1特例）和 IEEE 754 标准阶码偏置值、隐藏位与特殊数值对应规则，形成了完整的定点和浮点表示理论框架。
- Next: 开启 2.2.2 定点数的运算（移位与加减、Booth乘法、除法）和 2.3.2 浮点数的运算 Ingest。

## 2026-07-08 supplement | 数制与编码完全对齐教材重构

- Source: 27王道《计算机组成原理》第二章2.1节
- Created: 无
- Updated: [[wiki/concepts/计算机组成原理/第2章 数据的表示和运算/数制与编码|数制与编码]]、[[hot]]、[[log]]
- Subject: 计算机组成原理
- Key exam value: 完全对照王道教材2.1节框架，全面补齐了基数与权的数学定义、计算机内部采用二进制的4大原因、进制后缀（B、D、O、H）、有权与无权BCD码区别、余3码和2421码的“自补码特性”定义与证明、2421码大等于5的最高位判定规避歧义规则，以及汉字三种编码（区位、国标、机内码）的十六进制计算关系。
- Next: 开启 2.2 定点数的表示和运算（原码、反码、补码、移码）的 Ingest 动作，提炼考点。

## 2026-07-08 supplement | 算法题单重排链表录入

- Source: 用户提供的 LeetCode 143 重排链表最优解法
- Created: 无
- Updated: [[wiki/408专业课/数据结构/算法题单|算法题单]]、[[hot]]、[[log]]
- Subject: 数据结构
- Key exam value: 在数据结构算法题单中补充录入了重排链表的 O(1) 空间复杂度最优解法（快慢指针找中点 + 链表反转 + 链表交错合并），与常规 vector 辅助数组解法做对比，丰富了链表操作类考题的题型归纳。
- Next: 继续练习 2-3 道链表操作综合题，熟练掌握原地反转与归并的指针控制。

## 2026-07-08 ingest | 数学三类常见可积函数积分

- Source: 教材原本第81-84页
- Created: [[wiki/数学/三类常见可积函数积分|三类常见可积函数积分]]
- Updated: [[wiki/数学/_index|数学索引]]、[[hot]]、[[log]]
- Subject: 数学
- Key exam value: 系统化总结了考研高数中必考的有理函数、三角有理式和简单无理式积分三大特殊可积函数的解题套路，详细补充了例10-例17的高效算式解析（含裂项、万能公式及有理化双重解法比较），强力攻克大题的复杂求导与积分计算瓶颈。
- Next: 练习 8-10 道不定积分大题，巩固并熟练运用三种特殊积分换元与凑微分子步骤。

## 2026-07-07 supplement | 计算机组成原理第一章概念补全

- Source: `D:\408\408\.raw\408\计算机组成原理\第一章 计算机系统概述.pdf`、`计算机组成原理第一章.xmind`
- Created: 无
- Updated: [[wiki/concepts/计算机组成原理/第1章 计算机系统概述/计算机系统概述|计算机系统概述]]、[[wiki/concepts/计算机组成原理/第5章 中央处理器/指令执行过程|指令执行过程]]、[[hot]]
- Subject: 计算机组成原理
- Key exam value: 对照王道教材与第一章思维导图，系统性补全了第一章考研的核心物理概念（如三种字长的区分、数据通路/总线带宽、程序翻译四阶段、向后兼容/固件等术语）以及精细的寄存器流转步骤（如 `ADD X` 指令执行的 RTL 图景），为解决第一章的选择题提供扎实的理论基础。
- Next: 规划开启第二章数据的表示和运算的 Ingest 动作。

---

## 2026-07-07 ingest | 27王道《计算机组成原理》教材原本导入

- Source: `D:\408\资料\27王道考研408（无水印pdf）\27王道《计算机组成原理》高清带书签.pdf` -> 复制至 `.raw/27王道《计算机组成原理》高清带书签.pdf`
- Created: 无
- Updated: [[hot]]
- Subject: 计算机组成原理
- Key exam value: 将计算机组成原理的王道教材原本高清带书签版导入知识库的 `.raw/` 目录，为后续拆解章节考点、补全盲区与典型真题提供原始权威依据。
- Next: 规划对该教材进行目录或章节级分析，并逐步提炼高频做题概念与真题，充实计组知识网络。

---

## 2026-07-07 ingest | 计算机组成原理知识点系统补全

- Source: `D:/408/资料/27王道考研408（无水印pdf）/27王道《计算机组成原理》高清带书签.pdf`、`.raw/408/计算机组成原理（含新大纲考点）.pdf`、`.raw/408/计算机组成原理/` 分章资料
- Created: [[wiki/408专业课/计算机组成原理/计算机系统概述|计算机系统概述]]、[[wiki/408专业课/计算机组成原理/数据的表示和运算|数据的表示和运算]]、[[wiki/408专业课/计算机组成原理/存储系统|存储系统]]、[[wiki/408专业课/计算机组成原理/指令系统|指令系统]]、[[wiki/408专业课/计算机组成原理/中央处理器|中央处理器]]、[[wiki/408专业课/计算机组成原理/总线|总线]]、[[wiki/408专业课/计算机组成原理/输入输出系统|输入输出系统]] 等章节入口与高频概念页
- Updated: [[wiki/408专业课/计算机组成原理/_index|计算机组成原理索引]]、[[wiki/concepts/计算机组成原理/_index|计算机组成原理概念索引]]、[[hot]]
- Subject: 计算机组成原理
- Key exam value: 按王道 7 章和新大纲补齐计组章节入口、概念卡和做题入口，重点覆盖 Cache、虚拟存储、补码/浮点、寻址方式、数据通路、流水线、DMA/中断。
- Next: 后续可继续把每章精选题沉淀到 `wiki/gaps/` 或单独题型页。

---

## 2026-07-06 supplement | 数据结构算法题单

- Source: 本次刷题记录需求
- Created: [[wiki/408专业课/数据结构/算法题单|算法题单]]
- Updated: [[wiki/408专业课/数据结构/_index|数据结构索引]]、[[hot]]
- Subject: 数据结构
- Key exam value: 新增单页算法题单，用纵向模块记录刷过的算法题来源、章节、核心思路、复杂度、状态和代码实现，方便后续按章节二刷。
- Next: 每次刷题后追加一个题目模块；遇到反复卡住的题，再沉淀到 `wiki/gaps/`。

---

## 2026-07-05 supplement | concepts 文件夹化管理

- Source: 本次 concepts 定位体验优化反馈
- Created: [[wiki/concepts/数据结构/_index|数据结构概念索引]]、[[wiki/concepts/计算机组成原理/_index|计算机组成原理概念索引]]、[[wiki/concepts/操作系统/_index|操作系统概念索引]]、[[wiki/concepts/计算机网络/_index|计算机网络概念索引]]
- Updated: [[wiki/concepts/_index|概念索引]]、[[wiki/index|总索引]]、[[wiki/408专业课/_index|408 专业课索引]]、[[wiki/408专业课/数据结构/_index|数据结构索引]]、[[hot]]
- Subject: 408 专业课
- Key exam value: 将 78 个 concepts 概念页从平铺目录迁移到四科文件夹，文件树和索引都能按科目定位，显式路径链接同步指向新位置。
- Next: 后续新增概念页时直接放入对应四科子目录，并同步更新该科 `_index.md`。

---

## 2026-07-05 supplement | concepts 分类导航体验增强

- Source: 本次索引体验优化反馈
- Created: 无
- Updated: [[wiki/concepts/_index|概念索引]]、[[wiki/index|总索引]]、[[hot]]
- Subject: 408 专业课
- Key exam value: 将 78 个概念页按数据结构、计算机组成原理、操作系统、计算机网络重新分组，并新增高频做题入口，方便从概念库快速进入复习链路。
- Next: 后续新增概念页时同步归入对应科目表格；高频入口只保留最常用的做题跳转。

---

## 2026-07-05 supplement | 数据结构算法复杂度索引与解题思路

- Source: 本次复习反馈
- Created: 无
- Updated: [[wiki/408专业课/数据结构/_index|数据结构索引]]、[[wiki/concepts/数据结构/算法复杂度分析|算法复杂度分析]]、[[hot]]
- Subject: 数据结构
- Key exam value: 补齐算法复杂度在数据结构索引中的入口，并将概念页扩展为可做题的流程表、循环模板、递归模板和空间复杂度判断表。
- Next: 后续可把具体错题沉淀到 [[wiki/gaps/树图算法复杂度|树图算法复杂度]]。

---

## 2026-07-05 ingest | 数学积分资料 21-32 图片补充

- Source: `.raw/数学/21.jpg-32.jpg`
- Created: [[wiki/数学/不定积分|不定积分]]、[[wiki/数学/不定积分基本公式|不定积分基本公式]]、[[wiki/数学/第一类换元积分法|第一类换元积分法]]、[[wiki/数学/第二类换元积分法|第二类换元积分法]]、[[wiki/数学/分部积分法|分部积分法]]、[[wiki/数学/不定积分典型题|不定积分典型题]]
- Updated: [[数学/_index]]、[[hot]]
- Subject: 数学 / 高数
- Key exam value: 把积分资料整理成“基本公式 -> 方法选择 -> 换元/分部技巧 -> 典型题识别”的复习链路，后续做不定积分题时可以先判断结构再动手。
- Next: 用 8-10 道题检验凑微分、三类根式代换、分部积分和循环分部积分；若出现错题，再沉淀到 `wiki/gaps/`。

---

## 2026-07-05 supplement | 数学三角函数公式速查

- Source: 本次复习需求
- Created: [[三角函数常用公式]]、`wiki/resources/三角函数公式记忆图.png`
- Updated: [[数学/_index]]、[[hot]]
- Subject: 数学 / 高数
- Key exam value: 建立三角函数公式速查页，覆盖基本关系、诱导公式、和差角、倍角、半角、积化和差、和差化积和常用特殊值，方便后续衔接极限、展开式与积分专题。
- Boundary: 本次不补充第二类换元法，后续单独整理。
- Next: 后续学习积分第二类换元法时，再补充三角代换选择、换元限与回代。

---

## 2026-07-04 ingest | 408 与数学素材归档到 vault

- Source: `.raw/408`、`.raw/数学`
- Created: `.raw/408/教材PDF/`、`.raw/408/选择题做题本/`、`.raw/408/经验指南/`、`.raw/数学/`
- Updated: [[408资料清单]]、[[408专业课/_index]]、[[hot]]，并将相关概念页、题型页、数学页的 `sources` 从外部路径改为 vault 内 `.raw/...` 路径。
- Subject: 408 专业课 | 数学 / 高数
- Key exam value: 知识库现在包含本次用到的教材 PDF、选择题本、经验指南和数学图片原始素材，复习页可以在 vault 内自包含追溯来源。
- Next: 后续继续从 `.raw/408/选择题做题本/` 抽章节级题型和代表例题，不逐题 OCR 搬运。

---

## 2026-07-04 ingest | 408 专业课资料补全与题型盲区

- Source: `.raw`（王道 408 教材 PDF、思维导图、选择题做题本；大型 PDF 未重复复制进 vault）
- Created: [[408资料清单]]、[[数据结构]]、[[计算机组成原理]]、[[操作系统]]、[[计算机网络]]、[[二叉树的遍历]]、[[二叉搜索树]]、[[平衡二叉树]]、[[堆]]、[[图的基本概念]]、[[图的遍历]]、[[最小生成树]]、[[最短路径]]、[[拓扑排序]]、[[关键路径]]、[[算法复杂度分析]]、[[定点数运算]]、[[浮点数运算]]、[[补码溢出判断]]、[[算术逻辑单元]]、[[存储器层次结构]]、[[虚拟存储器]]、[[指令系统]]、[[CPU结构]]、[[指令流水线]]、[[中断系统]]、[[总线系统]]、[[TCP拥塞控制]]、[[DNS]]、[[HTTP]]、[[HTTPS]]、[[FTP]]、[[电子邮件]]、[[DHCP]]、[[Cache映射计算]]、[[补码溢出]]、[[子网划分]]、[[TCP状态转换]]、[[树图算法复杂度]]、[[页面置换算法]]
- Updated: [[数据表示]]、[[数组和广义表]]、[[树的基本概念]]、[[磁盘空间管理]]、[[进程与线程]]、[[408专业课/_index]]、[[gaps/_index]]、[[concepts/_index]]、[[resources/_index]]、[[hot]]
- Subject: 数据结构 | 计算机组成原理 | 操作系统 | 计算机网络
- Key exam value: 修复空页和索引断链，把 408 资料从“已有资料”推进到“可检索知识网 + 题型盲区入口”。
- Next: 从三科选择题做题本继续抽代表题型，为 Cache、补码、子网、TCP、树图复杂度页补具体例题。

---

## 2026-07-04 supplement | 数学高数页补充例题

- Source: `.raw/数学/*.jpg` 与本次复习反馈
- Created: 无
- Updated: [[导数定义与求导法则]]、[[导数应用]]、[[泰勒公式展开]]、[[洛必达法则]]、[[hot]]
- Subject: 数学 / 高数
- Key exam value: 在公式页补入短例题，建立“识别题型 -> 选择工具 -> 关键步骤”的做题链路。
- Next: 继续给中值定理体系补证明型例题，或将错题沉淀到 `wiki/gaps/`。

---

## 2026-07-04 ingest | 数学图片资料：极限、导数与中值定理

- Source: `.raw/数学/*.jpg`（1.jpg-20.jpg）
- Created: [[导数定义与求导法则]]、[[导数应用]]
- Updated: [[等价无穷小]]、[[重要极限]]、[[泰勒公式展开]]、[[洛必达法则]]、[[费马引理]]、[[罗尔定理]]、[[拉格朗日中值定理]]、[[柯西中值定理]]、[[数学/_index]]、[[hot]]
- Subject: 数学 / 高数
- Key exam value: 将手写与教材图片中的高数一轮复习内容整理成“极限工具链 + 中值定理链 + 导数应用链”，便于直接做极限、证明和函数图像题。
- Next: 继续补不定积分、定积分应用、线性代数基础，或用典型题反向生成错题/盲区页。

---

## [2026-07-02] ingest | 数学补充资料（等价无穷小、泰勒公式、重要极限、柯西中值定理、洛必达法则）

- Source: `.raw/数学/`（1.jpg–7.jpg）
- Summary: 识别手写笔记并拆分为五个概念页
  - [[等价无穷小]] — 10组常见等价无穷小 + 代换原则（乘除直接替换，加减分别验证条件）
  - [[泰勒公式展开]] — 麦克劳林展开式（基本展开 + 三角函数展开）
  - [[重要极限]] — $\lim\limits_{x\to0}\frac{\sin x}{x}=1$ 与 $\lim\limits_{x\to0}(1+x)^{1/x}=e$
  - [[柯西中值定理]] — 条件、结论、构造法证明（基于罗尔定理）
  - [[洛必达法则]] — 三种条件、8种不定式类型（$0/0, \infty/\infty, 0\cdot\infty$ 等）

---

## [2026-07-02] ingest | 数学补充资料（等价无穷小、泰勒公式、重要极限）

- Source: `.raw/408/`
- Summary: [[408专业课/王道408资料导入记录]]
- 原始文件: 83个文件（186MB），已复制到 `.raw/408/`
  - 数据结构：17个文件（PDF + PNG + Xmind）
  - 计算机组成原理：21个文件
  - 操作系统：20个文件
  - 计算机网络：20个文件
  - 5个完整PDF（每科目一个含新大纲考点）
- Wiki页面创建:
  - 408专业课索引：[[408专业课/_index]]
  - 四个子科目索引页：数据结构/计组/操作系统/网络
  - 导入记录：[[408专业课/王道408资料导入记录]]
  - hot.md 已更新
- 处理方式: 使用 wiki-ingest agent 并行处理

---

## [2026-07-02] create | 408考研核心知识点卡片批量补充（第二批）

- Source: 王道考研408《思维导图》+ 《复习指导》
- Summary: [[408专业课/王道408资料导入记录]]
- 知识点卡片补充: 21个新概念卡片（累计35个）

### 数据结构（新增1个）
- [[动态规划]] — 背包问题、最长公共子序列（LCS）、最长递增子序列（LIS）

### 计算机组成原理（新增1个）
- [[定点数与浮点数运算]] — 补码加减法、溢出判断、浮点数运算步骤、舍入处理

### 操作系统（新增3个）
- [[进程调度]] — FCFS、SJF、优先级调度、时间片轮转、多级反馈队列
- [[进程同步与通信]] — P/V操作、信号量、经典同步问题（生产者消费者、读者写者、哲学家进餐）
- [[死锁]] — 死锁条件、预防、避免、银行家算法
- [[虚拟内存与磁盘调度]] — 请求分页、缺页中断、页面置换算法（OPT/FIFO/LRU/Clock）、磁盘调度（FCFS/SSTF/SCAN）

### 计算机网络（新增6个）
- [[物理层]] — 数据通信基础、传输介质、调制与编码、信道复用
- [[数据链路层]] — 组帧、CRC校验、CSMA/CD、PPP
- [[UDP协议]] — 无连接、不可靠、首部格式
- [[IP地址与子网划分]] — IP分类、子网划分、CIDR、私有地址、NAT
- [[ARP与ICMP协议]] — ARP地址解析、ICMP报文、Ping、Traceroute
- [[路由协议]] — RIP、OSPF、BGP

### 索引页面更新
- 四个科目索引页面已更新，添加新知识点卡片链接
- [[408专业课/数据结构/_index]]、[[408专业课/计算机组成原理/_index]]、[[408专业课/操作系统/_index]]、[[408专业课/计算机网络/_index]]
- hot.md 已更新

### 累计统计
- 总知识点卡片：35个
  - 数据结构：9个
  - 计算机组成原理：6个
  - 操作系统：6个
  - 计算机网络：10个
- 知识点卡片特点：
  - 完整的YAML frontmatter元数据
  - 详细的定义和概念解释
  - C语言算法实现
  - 时间/空间复杂度分析
  - 对比表格
  - 考试要点（高频考点、常见陷阱、真题示例）
  - Sources引用

---

## [2026-07-02] scaffold | 408 考研知识库搭建

- Source: N/A（从零搭建）
- Summary: [[overview]]
- 页面创建: [[overview]], [[index]], [[hot]]（更新）
- 目录结构: wiki/数学/, wiki/英语/, wiki/政治/, wiki/408专业课/（含4个子目录）, wiki/concepts/, wiki/papers/, wiki/gaps/, wiki/goals/, wiki/resources/
- 模板创建: _templates/ 下各类型模板（概念/真题/错题/目标/复盘等）
- 关键决策: 采用 Mode E（Research）+ Mode D（Personal）组合模式，专为考研 408 设计
- 下一步: 等待用户确定目标院校和科目后，开始导入教材和真题

---

## [2026-04-15] release | Claude SEO v1.9.0 Release Report

Entry format: `## [YYYY-MM-DD] operation | Title`

Parse recent entries: `grep "^## \[" wiki/log.md | head -10`

---

## [2026-04-24] save | v1.6.0 public release notes (Teams, Karpathy-style)
- Type: release doc + visual assets
- Locations (new): `docs/releases/v1.6.0.md` (346 lines, 6 sections, Karpathy-style prose), `wiki/meta/dragonscale-mechanism-overview.svg` (4-mechanism diagram with shared .vault-meta/ gate), `wiki/meta/dragonscale-6-test-flow.svg` (validation timeline), `wiki/meta/dragonscale-frontier-graph.svg` (M4 candidate + 3 filed pages)
- Locations (modified): `wiki/meta/2026-04-24-v1.6.0-release-session.md` (cross-reference added pointing to public release notes)
- Scope: Teams approach. R1 (chair) wrote 3 original SVGs per SVG Diagram Style Guide. R2 (codex worker) drafted Karpathy-style release prose. R3 (chair) stitched SVGs, pivoted Wikipedia imagery to text links only (no binary vendoring per permission). R4 (codex verifier) returned ACCEPT WITH FIXES, 3 wording fixes on version narrative. R5 (chair) applied fixes, committed.
- Style: direct, short, signal-dense, lists over prose, no em dashes, no marketing terms. Verifier confirmed zero em-dashes and zero banned marketing language ('revolutionary', 'seamless', 'world-class', 'game-changing', 'unlock', 'transform').
- Distribution (all three destinations covered): (1) `docs/releases/v1.6.0.md` public-facing file (commit `85515bb`), (2) `wiki/meta/2026-04-24-v1.6.0-release-session.md` internal engineering record (cross-linked), (3) GitHub Release body (user to paste from docs/releases/v1.6.0.md when ready to `gh release create v1.6.0`).
- Wikipedia imagery: referenced as text link to `https://en.wikipedia.org/wiki/Dragon_curve` rather than hotlinked or vendored. Cleaner license-wise (no CC-BY-SA attribution needed) and no external dependency. The 3 original SVGs carry the visual load instead.
- PII scan post-write: `docs/releases/v1.6.0.md` + all three SVGs are clean. No `/home/` paths, no real emails, no tokens.
- Next recommended: user runs `gh release create v1.6.0 --notes-file docs/releases/v1.6.0.md` when ready to cut the public release. This also creates the annotated tag.

## [2026-04-24] save | DragonScale end-to-end validation pass (Teams, 6 tests)
- Type: validation + first real fold + first real autoresearch
- Tests executed (all green):
  - T0 ollama pull `nomic-embed-text`: done (274MB, 15s wall)
  - T1 M1 dry-run k=3 via codex: DRY-RUN OK, 8 children, no em-dashes
  - T2 M2 real allocate: counter advanced 2 to 3, got `c-000002` (unassigned reservation; gap acceptable per spec)
  - T3 M3 full tiling with model present: 41 pages scanned, 21 embedded, 20 correctly skipped (meta/excluded/embed-error), 0 errors at >=0.9, 15 pairs in 0.8-0.9 review band (top 0.8822 Compounding Knowledge vs LLM Wiki Pattern, a legitimate semantic neighbor), report at `wiki/meta/tiling-report-2026-04-24.md`
  - T4 M1 commit via codex: first real fold committed, `wiki/folds/fold-k3-from-2026-04-23-to-2026-04-24-n8.md` (115 lines, 8 children, flat extractive). Flips the long-standing "no fold committed yet" status
  - T6 M4 autoresearch no-topic via codex: selected "How does the LLM Wiki pattern work?" as candidate (score 1.7022, #3 after skipping top-1 source + top-2 self-reference); 6 web fetches (Karpathy gist, RAG paper arXiv 2005.11401, MemGPT arXiv 2310.08560, Obsidian docs); 3 new concept pages filed, each with Primary Sources
- Locations (new): `wiki/folds/fold-k3-from-2026-04-23-to-2026-04-24-n8.md`, `wiki/meta/tiling-report-2026-04-24.md`, `wiki/concepts/Persistent Wiki Artifact.md`, `wiki/concepts/Source-First Synthesis.md`, `wiki/concepts/Query-Time Retrieval.md`
- Locations (modified): `.vault-meta/address-counter.txt` (2 to 3), `wiki/index.md` (3 concept links), `wiki/concepts/_index.md` (3 concept links)
- Scope: six-test menu the user approved. Codex gpt-5.4 for T1/T4/T6 (sub-agent delegation); chair for T0/T2/T3 (one-shot shell) and all integration (index, log, hot, commit).
- Style: all new content uses colons or parens instead of em-dashes. Pre-existing em-dashes in index entries and wiki/concepts/_index.md left as-is (clean-room boundary; deferred to F-slice style pass).
- Tests still green: `make test` passes (74+ assertions).
- Integration: chair added the 3 new concepts to `wiki/index.md` and `wiki/concepts/_index.md` with colon-style descriptions so the fresh pages are discoverable. The cluster extends `[[How does the LLM Wiki pattern work?]]` and cross-references `[[LLM Wiki Pattern]]`.
- Next recommended slice: either (G) commit this test batch and declare v1.6.0 validated, or (H) run a second fold k=3 now that 8 newer entries exist above this one and close the hierarchical-fold-not-yet-supported loop in a future phase.

## [2026-04-24] save | v1.6.0 closeout (Teams, chair-led)
- Type: docs + release hygiene
- Locations (new): wiki/meta/2026-04-24-v1.6.0-release-session.md (release session summary, 346 lines), wiki/meta/boundary-frontier-2026-04-24.md (first M4 run artifact against this vault), docs/dragonscale-guide.md (user-facing DragonScale guide, 563 lines)
- Locations (modified): wiki/hot.md (tag-claim fix, Scripts line adds boundary-score, tests line adds test_boundary_score, push-line drift, tiling line-count, one em-dash), docs/install-guide.md (version 1.5.0 to 1.6.0, DragonScale callout expanded to all four mechanisms, "hierarchical log folds" corrected to "flat extractive log folds", points to docs/dragonscale-guide.md), README.md (DragonScale parenthetical expanded to all four mechanisms plus guide link)
- Scope: Teams approach, chair-led. Slice A (2 codex read-only explorers: closeout punch list + doc-surface map). Slice B (6 bounded writes: 4 chair, 2 codex workers, non-overlapping write scopes). Slice C (codex adversarial verifier, ACCEPT WITH FIXES). Slice D (fix pass + log entry + manual commit of docs + README).
- Verifier: C1 found 11 items across 6 files. All 11 applied. Flag typos `--allow-remote-ollama` and `--report PATH` corrected in release-session; boundary-frontier provenance corrected to `--top 7` to match default vs explicit top; hot.md tiling line-count claim stripped to avoid drift; hot.md "local tag only" corrected to "local commits only, no git tag"; install-guide log-fold wording corrected from "hierarchical" to "flat extractive"; dragonscale-guide rollback wording corrected (`.vault-meta/` is a shared gate across M2+M3+M4, not per-mechanism).
- Model: codex gpt-5.4 used throughout. User requested gpt-5.5; not reachable via codex CLI 0.123.0 / this account at the time. models_cache lists max gpt-5.4, and the API rejects gpt-5.5 with "does not exist or you do not have access". Existing config already has `service_tier = "fast"` and `sandbox_mode = "workspace-write"`, matching the "fast for chatgpt with permission of full access" intent.
- Tests: `make test` passes. test_allocate_address.sh (shell, 12 assertions), test_tiling_check.py (python, 18 assertions), test_boundary_score.py (python, 44 assertions). Zero ollama dependency.
- Tags: still no local v1.5.0 / v1.5.1 / v1.6.0 tags. User controls tag creation and push. Pre-existing tags unchanged (v1.1, v1.4.0 through v1.4.3).
- Deliberately NOT done: no real M1 fold committed; no M3 end-to-end run (needs `ollama pull nomic-embed-text`); pre-existing em-dashes in install-guide.md and README.md left untouched (clean-room boundary, not in write scope this slice); CLAUDE.md pre-existing uncommitted change left untouched.
- Next recommended slice: either (E) push to origin/main and create annotated tags v1.5.0, v1.5.1, v1.6.0 in landing order, or (F) dedicated style pass to scrub pre-existing em-dashes across install-guide.md, README.md, and any other wiki files flagged by a grep scan.

## [2026-04-24] save | DragonScale Phase 4 — boundary-first autoresearch shipped (v1.6.0)
- Type: feature release
- Locations (new): scripts/boundary-score.py (with --top, --page, --json, stdout-only CLI), tests/test_boundary_score.py (40+ assertions)
- Locations (modified): skills/autoresearch/SKILL.md (new Topic Selection section A/B/C with helper-failure fallback), commands/autoresearch.md (no-topic candidate flow with agenda-control label), wiki/concepts/DragonScale Memory.md (v0.4: M4 flipped from NOT IMPLEMENTED to shipped; exact formula without recency floor; filename-stem disclosure; fence-handling qualifiers), CHANGELOG.md, .claude-plugin/{plugin,marketplace}.json (1.5.0 -> 1.6.0), Makefile (test-boundary target), wiki/hot.md, wiki/index.md, wiki/concepts/_index.md (status drift resolved).
- Scope: boundary-first autoresearch as opt-in Topic Selection mode. `/autoresearch` without a topic surfaces top-5 frontier pages; user picks/overrides/declines. Explicit helper-failure fallback to user-ask. Labeled "agenda control" throughout to match the spec's scope disclosure.
- Correctness: filename-stem resolution including folder-qualified `[[notes/Foo]]` -> Foo.md. Self-loops, unresolved targets, meta-targets, symlinks, and vault escapes all excluded. Code-fence parser handles backticks AND tildes with CommonMark length tracking (longer opening fence is not closed by shorter inner fence). Indented blocks intentionally not filtered (Obsidian bullet convention).
- Recency: exp(-days/30), no floor. Stale pages approach zero weight so they do not dominate frontier ranking.
- Review rounds: codex adversarial Phase 4 round 1 (10 items: 7 reject + 3 refine). Round 2 (7 accept + 3 still-reject: folder-qualified stem, docstring floor mention, hot.md historical drift). Round 3 (3 accept, PASS).
- Phase 3.6 (pre-Phase-4 hardening) already landed as v1.5.1: tiling --report VAULT_ROOT confinement, rollout baseline, AGENTS.md consistency, wiki-ingest .raw/ contradiction, install-guide version.
- All four DragonScale mechanisms now shipped and opt-in. 44 commits ahead of origin/main, no push.

## [2026-04-24] save | DragonScale Phase 3.5 — cross-phase hardening to v1.5.0
- Type: release hardening
- Locations (new): bin/setup-dragonscale.sh (opt-in installer), tests/test_allocate_address.sh, tests/test_tiling_check.py, Makefile, CHANGELOG.md
- Locations (modified): hooks/hooks.json (+.vault-meta/ staging), agents/wiki-ingest.md (single-writer rule for addresses), agents/wiki-lint.md (Mechanism 2+3 checks), skills/wiki-ingest/SKILL.md (aligned non-DragonScale wording), wiki/concepts/DragonScale Memory.md (M2 severity matches lint, M4 marked NOT IMPLEMENTED, seed page gets address c-000001), .claude-plugin/{plugin.json,marketplace.json} (1.4.2/1.4.3 → 1.5.0), README.md (11 skills + DragonScale callout), wiki/hot.md (refreshed for v1.5.0), .raw/.manifest.json (address_map now has DragonScale Memory.md → c-000001), .gitignore (.vault-meta/.tiling.lock + cache), .vault-meta/address-counter.txt (advanced to 2).
- Scope: resolve the 10 hold-ship items from the cross-phase audit. Add reproducible test harness (make test passes). Version-bump plugin.json and marketplace.json to 1.5.0. Create CHANGELOG.md. Refresh hot cache.
- Review rounds: codex 3.5a (5/5 accept on doc/agent fixes), codex final holistic (10/10 accept on audit items + 2 surgical regression fixes: wiki-ingest/wiki-lint non-DragonScale wording alignment, README skill count).
- Tests: `make test` runs 12 shell assertions (allocator) + 18 python assertions (tiling-check). All pass; no ollama dependency.
- Phase 3.5 complete. Repo state: 6 developer commits added this pass (f2e73c1, 2b49a0c, 8b28e48, 19ad7e4, 365f557, 2e7dd16). Total 39 commits ahead of origin/main. No push.

## [2026-04-24] save | DragonScale Phase 3 — semantic tiling MVP
- Type: skill update + new script + threshold state
- Locations: scripts/tiling-check.py (485 lines), .vault-meta/tiling-thresholds.json (seed defaults), skills/wiki-lint/SKILL.md (109-line Semantic Tiling section + item #10 in checks), wiki/concepts/DragonScale Memory.md (Mechanism 3 cost framing clarified)
- Scope: opt-in embedding-based duplicate detection via ollama nomic-embed-text. Default bands error>=0.90, review>=0.80, explicitly documented as conservative seeds (not literature-backed interpolation). Calibration procedure documented, not automated.
- Security: default OLLAMA_URL locked to 127.0.0.1; non-localhost requires --allow-remote-ollama flag. Symlinks and vault-root escapes rejected before file reads (prevents data exfil).
- Correctness: cache keyed on sha256(model+body); orphan GC on save; model-drift auto-invalidation on load.
- Concurrency: flock(LOCK_EX) on .vault-meta/.tiling.lock; per-PID temp file for atomic writes.
- Scale: warn >500 pages; hard-fail exit 4 at >5000 pages.
- Exit codes: 0/2/3/4/10/11 distinctly surfaced in wiki-lint wiring (not collapsed into "unknown").
- Review rounds: 4 codex exec adversarial passes covering security, cache correctness, feature gate, inclusion logic, scale, threshold honesty, concurrency, exit codes, model drift, terminology coupling.
  Round 1: 10 items -> 7 reject + 3 refine.
  Round 2: 6 accept + 4 still-reject (symlink ordering, prose sync, exit-code wiring, terminology in checklist + "no API cost" claim).
  Round 3: 3 accept + 1 still-reject (cost-framing phrasing).
  Round 4: accept.
- Final verdict: 10/10 accept.
- Phase 3 complete. All three DragonScale mechanisms that were in-scope for the initial spec are now shipped as opt-in features. Mechanism 4 (boundary-first autoresearch) was flagged as agenda-control out-of-scope per the v0.2 scope boundary; may or may not ship as a future phase.

## [2026-04-23] save | DragonScale Phase 2 — deterministic page addresses MVP
- Type: skill update + new script
- Locations: scripts/allocate-address.sh, skills/wiki-ingest/SKILL.md (Address Assignment section), skills/wiki-lint/SKILL.md (Address Validation section), wiki/concepts/DragonScale Memory.md (Mechanism 2 rewritten v0.2→v0.3), .vault-meta/address-counter.txt, .raw/.manifest.json (new)
- Scope: MVP address format `c-NNNNNN` (creation-order counter, zero-padded 6 digits). Rollout baseline 2026-04-23. Legacy pages exempt until deliberate backfill (future `l-` prefix). No content hash, no fold-ancestry encoding in the MVP (both deferred).
- Concurrency: atomic allocation via flock-guarded Bash helper. Counter recovery from max observed `c-` address, never silent reset to 1.
- Lint: post-rollout pages without address are errors; legacy pages without address are informational. Optional `.vault-meta/legacy-pages.txt` manifest grandfathers pages with missing/wrong `created:` metadata.
- Re-ingest idempotency: `.raw/.manifest.json` `address_map` preserves path→address mapping across re-ingests and renames.
- Naming: mechanism renamed from "content-addressable paths" to "deterministic page addresses" (the MVP is a counter, not a content hash; the old name was overclaim).
- Review rounds: 2 codex exec adversarial passes. Round 1: 8 rejects covering counter mutation, race conditions, uniqueness atomicity, missing-file recovery, terminology drift, silent regression path, legacy classification, re-ingest idempotency. Round 2: 7 accept + 1 reject (manifest.json absent). Round 3 (item 8 only): accept after creating `.raw/.manifest.json`.
- Final verdict: 8/8 accept.
- Phase 2 complete. Phase 3 (semantic tiling lint) gated on human approval.

## [2026-04-23] save | DragonScale Phase 1 — wiki-fold skill shipped
- Type: skill
- Location: skills/wiki-fold/SKILL.md, skills/wiki-fold/references/fold-template.md
- Scope: flat extractive fold over raw wiki/log.md entries. Dry-run default via Bash stdout (no Write tool, avoids PostToolUse hook residue). Structural idempotency via deterministic fold_id. Duplicate-range detection. Fold-of-folds explicitly out of scope.
- Review rounds: 3 codex exec adversarial passes. Round 1: 1 refine + 6 reject across 7 items (allowed-tools, hook-mutation risk, idempotency claim, dry-run faithfulness, children structure, Mechanism 1 coverage, auto-commit conflict). Round 2: 6 accept + 1 reject (25/26 count inversion). Round 3 (item 4 only): accept.
- Final verdict: 7/7 accept.
- Dry-run artifact: /tmp/wiki-fold-dry-run-v2.md (not committed). fold_id: fold-k3-from-2026-04-10-to-2026-04-23-n8.
- Phase 1 complete. Phase 2 (content-addressable paths) gated on human approval.

## [2026-04-23] save | DragonScale Memory v0.2 — post-adversarial-review
- Type: concept revision
- Location: wiki/concepts/DragonScale Memory.md
- Review: codex exec adversarial review rejected all 7 load-bearing claims in v0.1
- Changes: weakened LSM analogy, removed strong prompt-cache claim, replaced 0.85 threshold with calibration procedure, justified 2^k as MVP convenience, acknowledged scope-boundary leak for boundary-first autoresearch, added Operational Policies section (retention/tombstones/versioning/conflict/concurrency/provenance/ACL), tagged claims as [sourced]/[derived]/[conjecture], narrowed tagging scope per re-review
- Re-review result: 7/7 accepted (after one surgical fix on tagging-scope language)
- Phase 0 complete. Phase 1 (wiki-fold skill) gated on human approval.

## [2026-04-23] save | DragonScale Memory — Phase 0 design doc (proposed)
- Type: concept
- Location: wiki/concepts/DragonScale Memory.md
- From: brainstorming session on applying Heighway dragon curve properties to LLM wiki memory architecture
- Scope: memory-layer only, NOT agent reasoning. Four mechanisms: (1) fold operator (LSM-style exponential compaction at 2^k log entries), (2) content-addressable page paths for prompt-cache stability, (3) semantic tiling lint (embedding-based dedup, 0.85 cosine threshold), (4) boundary-first autoresearch scoring
- Status: proposed. Phase 0 pending codex adversarial review. Phase 1+ (fold skill, address anchors, tiling lint, boundary score) gated on review pass.
- Primary sources verified: Dragon curve (Wikipedia, boundary dim 1.523627086), Regular paperfolding sequence (OEIS A014577), LSM trees (arXiv 2504.17178, LevelDB 10x level ratio), MemGPT (arXiv 2310.08560), Anthropic prompt caching docs (5min/1hr TTL, 20-block lookback)
- Links updated: wiki/concepts/_index.md, wiki/index.md

## [2026-04-15] save | Claude SEO v1.9.0 Slides and GitHub Release
- Type: session
- Location: wiki/meta/2026-04-15-slides-and-release-session.md
- From: built 15-slide HTML presentation deck (v190.html), fixed hardcoded path in release_report.py, pushed 68 files to GitHub, tagged v1.9.0, created GitHub release with PDF asset
- Key lessons: Path.home() not hardcoded paths, git pull --rebase before big pushes, Chrome blocks file:// cross-origin images, .claude/ always in .gitignore
- Release: https://github.com/AgriciDaniel/claude-seo/releases/tag/v1.9.0

## [2026-04-15] save | Claude SEO v1.9.0 Release Report — PDF Complete
- Type: session
- Location: wiki/meta/2026-04-15-release-report-session.md
- From: full session completing the v1.9.0 PDF release report. Dark theme, 13 pages, 1.53 MB. Fixed logo (double-space filename), empty spaces, page-break orphans, file:// URL encoding.
- Key fixes: `urllib.parse.quote()` for file:// URIs; `display:table-cell` is atomic in WeasyPrint (no page-break); fixed `height:297mm` causes empty space; replaced orphan tables with paragraphs
- Challenge v2 added: keyword LEADS, $600 prize pool, deadline April 28
- Output: `~/Desktop/Claude-SEO-v1.9.0-Release-Report.pdf`

## [2026-04-14] save | Claude SEO v1.9.0 — Pro Hub Challenge Integration Session
- Type: session + 4 concept pages + 1 entity page
- Location: wiki/meta/2026-04-14-claude-seo-v190-session.md
- From: full v1.9.0 implementation session — reviewed 5 community submissions, integrated 4 new skills (seo-cluster, seo-sxo, seo-drift, seo-ecommerce), enhanced seo-hreflang, added DataForSEO cost guardrails
- Pages created: [[2026-04-14-claude-seo-v190-session]], [[Claude SEO]], [[Pro Hub Challenge]], [[Semantic Topic Clustering]], [[Search Experience Optimization]], [[SEO Drift Monitoring]]
- Review rounds: 4 (code review x3 + cybersecurity audit). Score: 87 → 93 → 97 → 85 security
- Key learnings: always verify subagent output (40-line count error caught), insertion-point bugs caught by max-effort plan review, pre-existing security debt identified (10 of 15 findings)

## [2026-04-14] save | SVG Diagram Style Guide
- Type: concept
- Location: wiki/concepts/SVG Diagram Style Guide.md
- From: extracted design tokens from 17 production SVGs in claude-ads/assets/diagrams/
- Covers: colors, typography, layout primitives, card patterns, arrow connectors, numbered circles, file naming

## [2026-04-14] save | Community CTA Footer Rollout
- Type: decision
- Location: wiki/meta/2026-04-14-community-cta-rollout.md
- From: session adding Skool community footer to 6 skill repos (claude-ads, claude-seo, claude-obsidian, claude-blog, banana-claude, claude-cybersecurity)
- Key insight: frequency calibration per tool type; single-point orchestrator instruction pattern

## [2026-04-10] save | Backlink Empire - Blog Posts, Karpathy Gist, GitHub Cross-Linking
- Type: session
- Location: wiki/meta/2026-04-10-backlink-empire-session.md
- From: full session covering blog creation (claude-obsidian + claude-canvas), Karpathy gist comment, 26 GitHub README updates with Author/community/backlink sections, homepage URLs on 10 repos, topics on 25 repos, rankenstein.pro backlinks on 5 SEO repos
- Blog posts: agricidaniel.com/blog/claude-obsidian-ai-second-brain, agricidaniel.com/blog/claude-canvas-ai-visual-production
- Impact: ~87 new backlinks from DA 96 github.com, 6 rankenstein.pro backlinks, 25 Skool community links

## [2026-04-08] save | claude-obsidian v1.4 Release Session
- Type: session
- Location: wiki/meta/claude-obsidian-v1.4-release-session.md
- From: full release cycle covering v1.1 (URL/vision/delta tracking, 3 new skills), v1.4.0 (audit response, multi-agent compat, Bases dashboard, em dash scrub, security history rewrite), and v1.4.1 (plugin install command hotfix)
- Key lessons: plugin install is 2-step (marketplace add then install), allowed-tools is not valid frontmatter, Bases uses filters/views/formulas not Dataview syntax, hook context does not survive compaction, git filter-repo needs 2 passes for full scrub

## [2026-04-08] ingest | Claude + Obsidian Ecosystem Research
- Type: research ingest
- Source: `.raw/claude-obsidian-ecosystem-research.md`
- Queries: 6 parallel web searches + 12 repo deep-reads
- Pages created: [[claude-obsidian-ecosystem]], [[cherry-picks]], [[claude-obsidian-ecosystem-research]], [[Ar9av-obsidian-wiki]], [[Nexus-claudesidian-mcp]], [[ballred-obsidian-claude-pkm]], [[rvk7895-llm-knowledge-bases]], [[kepano-obsidian-skills]], [[Claudian-YishenTu]]
- Key finding: 16+ active Claude+Obsidian projects; 13 cherry-pick features identified for v1.3.0+
- Top gap confirmed: no delta tracking, no URL ingestion, no auto-commit

## [2026-04-07] session | Full Audit, System Setup & Plugin Installation
- Type: session
- Location: wiki/meta/full-audit-and-system-setup-session.md
- From: 12-area repo audit, 3 fixes, plugin installed to local system, folder renamed

## [2026-04-07] session | claude-obsidian v1.2.0 Release Session
- Type: session
- Location: wiki/meta/claude-obsidian-v1.2.0-release-session.md
- From: full build session — v1.2.0 plan execution, cosmic-brain→claude-obsidian rename, legal/security audit, branded GIFs, PDF install guide, dual GitHub repos


- Source: `.raw/` (first ingest)
- Pages updated: [[index]], [[log]], [[hot]], [[overview]]
- Key insight: The wiki pattern turns ephemeral AI chat into compounding knowledge — one user dropped token usage by 95%.

## [2026-04-07] setup | Vault initialized

- Plugin: claude-obsidian v1.1.0
- Structure: seed files + first ingest complete
- Skills: wiki, wiki-ingest, wiki-query, wiki-lint, save, autoresearch

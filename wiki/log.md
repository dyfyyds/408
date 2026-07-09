---
type: meta
title: "Operation Log"
updated: 2026-07-09
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

## 2026-07-09 ingest | 定点数与浮点数表示方法

- Source: 27王道《计算机组成原理》第二章2.2.1节与2.3.1节
- Created: [[wiki/concepts/计算机组成原理/定点数的表示|定点数的表示]]、[[wiki/concepts/计算机组成原理/浮点数的表示|浮点数的表示]]
- Updated: [[wiki/concepts/计算机组成原理/_index|计算机组成原理概念索引]]、[[hot]]、[[log]]
- Subject: 计算机组成原理
- Key exam value: 补齐了有符号定点数表示中原/反/补/移码的公式和极值，理清了原码补码快速转换判定逻辑与补码能多表示一个最小负数（-128与-1.0）的原因；系统归纳了浮点数规格化（左规、右规、原/补码规格化判定的首位规律以及补码规格化中的-1/2与-1特例）和 IEEE 754 标准阶码偏置值、隐藏位与特殊数值对应规则，形成了完整的定点和浮点表示理论框架。
- Next: 开启 2.2.2 定点数的运算（移位与加减、Booth乘法、除法）和 2.3.2 浮点数的运算 Ingest。

## 2026-07-08 supplement | 数制与编码完全对齐教材重构

- Source: 27王道《计算机组成原理》第二章2.1节
- Created: 无
- Updated: [[wiki/concepts/计算机组成原理/数制与编码|数制与编码]]、[[hot]]、[[log]]
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
- Updated: [[wiki/concepts/计算机组成原理/计算机系统概述|计算机系统概述]]、[[wiki/concepts/计算机组成原理/指令执行过程|指令执行过程]]、[[hot]]
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

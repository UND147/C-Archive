# Lotto Number Generator

1~45 사이의 번호 중 중복 없이 6개를 추첨하는 C 프로그램

## 📋 프로젝트 개요

### 목적
배열·함수·알고리즘 등 C 언어의 핵심 개념을 활용하여, 기능별로 함수를 분리하고 모듈화한 구조로 로또 번호 추첨 프로그램을 구현합니다.

### 주요 기능
- `rand()` 기반 1~45 난수 생성
- 중복 없는 6개 번호 추첨
- 선택 정렬을 이용한 오름차순 정렬
- 추첨 결과 출력
- 위 과정을 5회 반복

## 🎯 핵심 규칙

| 규칙 | 내용 |
|------|------|
| 범위 | 생성 번호는 1 이상 45 이하 |
| 중복 | 한 게임의 6개 번호는 모두 서로 다름 |
| 정렬 | 작은 수부터 오름차순으로 출력 |
| 반복 | 5회 추첨을 한 묶음으로 진행 |

## 🏗 모듈 구조

기능별로 함수를 분리하고, 선언부와 구현부, 실행부를 각각의 파일로 나누었습니다.

| 파일 | 역할 | 포함 함수 |
|------|------|-----------|
| `prg_lotto_main.c` | 전체 실행 흐름(`main`) | 로직 함수를 5회 호출 |
| `lib_lotto_logic.h` | 함수 원형 선언 | `getLottoNo`, `isDuplicateNo`, `sortArrAsc`, `prnArr` |
| `lib_lotto_logic.c` | 핵심 로직 구현 | 번호 생성 / 중복 검사 / 정렬 / 출력 |

### 함수 설명
- `void getLottoNo(int iLottoArr[])` — 1~45 난수를 중복 없이 6개 추출
- `int isDuplicateNo(const int iLottoArr[], int iIndex, int iRandNo)` — 생성된 번호가 기존 배열에 존재하는지 검사
- `void sortArrAsc(int iLottoArr[])` — 선택 정렬로 오름차순 정렬
- `void prnArr(const int iLottoArr[], int iLoop)` — 한 게임의 번호 출력

> **설계 포인트**: 번호 생성(`getLottoNo`)과 중복 검사(`isDuplicateNo`)는 책임이 다르다고 판단하여 함수를 분리했습니다. 이로써 각 함수의 역할이 명확해지고, 중복 검사 로직을 다른 곳에서도 재사용할 수 있습니다.

## 💻 빌드 및 실행

```bash
# g++/gcc (Windows · Linux · Mac 공통)
gcc -o lotto prg_lotto_main.c lib_lotto_logic.c
./lotto
```

> 헤더(`lib_lotto_logic.h`)는 두 `.c` 파일이 `#include` 하므로 컴파일 인자에 별도로 지정하지 않습니다.

## 🖥 실행 예시

```
====== 1번째 로또 번호 ======
{ 3 / 11 / 18 / 27 / 33 / 42 }

====== 2번째 로또 번호 ======
{ 1 / 9 / 15 / 22 / 38 / 45 }

... (총 5회 반복)
```
> `srand(time(0))` 로 시드를 설정하므로 실행할 때마다 결과가 달라집니다.

## 🛠 기술적 특징

### 중복 없는 추첨
새 번호를 뽑을 때마다 `isDuplicateNo()` 로 기존 번호와 비교하여, 중복이면 `continue` 로 재추첨합니다.

### 선택 정렬 (오름차순)
매 회전마다 남은 구간의 최솟값을 찾아 앞쪽 원소와 교환하는 선택 정렬을 직접 구현했습니다.

### 적용 개념
- 배열을 이용한 데이터 관리
- 기능 단위 함수 분리 및 호출
- 헤더(`.h`)와 구현(`.c`)의 분리
- `const` 한정자를 통한 읽기 전용 매개변수 보호

## 📄 파일 구조
```
C-Exam-2026-1/
├── prg_lotto_main.c     # 메인 프로그램 (실행 흐름)
├── lib_lotto_logic.h    # 함수 원형 선언
├── lib_lotto_logic.c    # 핵심 로직 구현
└── README.md          # 프로젝트 설명
```

---
**Contact**: [GitHub Profile](https://github.com/UND147)

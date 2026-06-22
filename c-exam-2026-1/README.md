# Lotto Number Generator

1~45 사이의 번호 중 중복 없이 6개를 추첨하는 C 프로그램

## 개요
배열·함수·알고리즘 등 C 언어의 핵심 개념을 활용하여, 기능별로 함수를 분리하고 모듈화한 구조로 로또 번호 추첨을 구현했습니다.

### 동작
- `rand()` 기반 1~45 난수 생성
- 중복 없는 6개 번호 추첨
- 선택 정렬을 이용한 오름차순 정렬
- 위 과정을 5회 반복

## 핵심 규칙
| 규칙 | 내용 |
|------|------|
| 범위 | 생성 번호는 1 이상 45 이하 |
| 중복 | 한 게임의 6개 번호는 모두 서로 다름 |
| 정렬 | 작은 수부터 오름차순 |
| 반복 | 5회 추첨을 한 묶음으로 진행 |

## 모듈 구조
기능별로 함수를 분리하고 선언부·구현부·실행부를 파일로 나누었습니다.

| 파일 | 역할 | 포함 함수 |
|------|------|-----------|
| `prg_lotto_main.c` | 전체 흐름(`main`) | 로직 함수를 5회 호출 |
| `lib_lotto_logic.h` | 함수 원형 선언 | `getLottoNo`, `isDuplicateNo`, `sortArrAsc`, `prnArr` |
| `lib_lotto_logic.c` | 핵심 로직 구현 | 번호 생성 / 중복 검사 / 정렬 / 출력 |

### 함수
- `void getLottoNo(int iLottoArr[])` — 1~45 난수를 중복 없이 6개 추출
- `int isDuplicateNo(const int iLottoArr[], int iIndex, int iRandNo)` — 생성된 번호가 기존 배열에 존재하는지 검사
- `void sortArrAsc(int iLottoArr[])` — 선택 정렬로 오름차순 정렬
- `void prnArr(const int iLottoArr[], int iLoop)` — 한 게임의 번호 출력

> 번호 생성(`getLottoNo`)과 중복 검사(`isDuplicateNo`)는 책임이 달라 함수를 분리했고, 중복 검사 로직을 재사용할 수 있게 했습니다.

## 구현 특징
- 새 번호마다 `isDuplicateNo()` 로 비교 후 중복이면 `continue` 로 재추첨
- 남은 구간의 최솟값을 찾아 교환하는 선택 정렬 직접 구현
- 헤더(`.h`)와 구현(`.c`) 분리, `const` 한정자로 읽기 전용 매개변수 보호

## 파일 구조
```
c-exam-2026-1/
├── prg_lotto_main.c     # 메인 (실행 흐름)
├── lib_lotto_logic.h    # 함수 원형 선언
├── lib_lotto_logic.c    # 핵심 로직 구현
└── README.md
```

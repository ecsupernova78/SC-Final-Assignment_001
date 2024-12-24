# SC Final Assignment
20215157 EunChan Lee

## Github 업로드 된 파일, 실행 방법

### hw1_BN_pi
##### 1202 Buffon's Needle problem_EunChanLee.ipynb  
*Jupyter Notebook*  
`각 세션 별로 실행.`

  
### hw1_HM_pi
##### 1202 Buffon's Hit-Miss estimated pi_EunChanLee.ipynb  
*Jupyter Notebook*  
`각 세션 별로 실행.`


### hw2_CD
##### 1023 Charge distribution(Walk on Sphere,).ipynb
*Jupyter Notebook*  
`각 세션 별로 실행.`


### hw3_BN_SPRNG
##### 저장된 파일
hw3_BN_SPRNG.sln  
hw3_BN_SPRNG.cpp  
sprng.h  
libsprng.lib  

##### .sln 실행, Visual Studio 환경 설정.
*Visual Studio (2019 이상)*, solution 속성  
- 구성 속성 > 고급 > 문자 집합: "유니코드 문자 집합 사용"  
- C/C++ > 일반 > 추가 포함 디렉터리: "[sprng.h 파일이 들어있는 경로 ex) .../sprng5/include]"
- 링커 > 일반 > 추가 라이브러리 디렉터리: "[libsprng.lib가 들어있는 파일 경로. ex) .../sprng5/lib]"
- 링커 > 입력 > 추가 종속성: "libsprng.lib" 추가.

##### 환경설정 끝나면 빌드 및 실행
`ctrl+shift+B // 빌드`  
`ctrl+F5 // 실행`  
buffon_results.png // 생성됨.  


### hw4_BN_QRNG
##### 저장된 파일
hw4_BN_QRNG.sln  
hw4_BN_QRNG.cpp  
quasirand.hpp  

##### .sln 실행, Visual Studio 환경 설정.
*Visual Studio (2019 이상)*, solution 속성  
- 구성 속성 > 고급 > 문자 집합: "유니코드 문자 집합 사용"  
- 환경설정 끝나면 빌드 및 실행  

*x86 Native Tools command Prompt for VS 2019* 실행  
`cd [hw4_BN_QRNG.cpp가 있는 경로]`  
`cl /std:c++20 hw4_BN_QRNG.cpp`  
hw4_BN_QRNG.exe // 파일 2개 생성됨.  
hw4_BN_QRNG.obj   
`hw4_BN_QRNG.exe`  
buffon_data.txt // 파일 4개 생성됨.  
fit.txt  
buffon_plot_gnu.gnu  
buffon_results.png  

### hw5_Makefile
##### 저장된 파일
hw5_Makefile.sln  
main.cpp  
throw_needle.cpp  
throw_needle.h  

##### .sln 실행, Visual Studio 환경설정.
*프로젝트 파일 추가*  
	솔루션 탐색기 > 소스 파일 > 추가 > "main.cpp", "throw_needle.cpp" 추가  
	솔루션 탐색기 > 헤더 파일 > 추가 > "throw_needle.h" 추가  

*Visual Studio (2019 이상)*, solution 속성  
- 구성 속성 > 고급 > 문자 집합: "유니코드 문자 집합 사용"
- 구성 속성 > VC++ 디렉터리 > 포함 디렉터리: "[MPI의 include 폴더 경로. ex) C:\Program Files (x86)\Microsoft SDKs\MPI\Include]"
- 구성 속성 > VC++ 디렉터리 > 라이브러리 디렉터리: "[msmpi.lib 파일 경로. ex) ]"
- C/C++ > 전처리기 > 전처리기 정의: "_CRT_SECURE_NO_WARNINGS", "_USE_MATH_DEFINES" 추가.
- C/C++ > 명령줄 > 추가 옵션(D): /D_MPI
- 링커 > 입력 > 추가 종속성: "msmpi.lib" 추가.

##### 환경설정 끝나면 빌드 및 실행
`ctrl+shift+B // 빌드`  
`ctrl+F5 // 실행`  
hw5_Makefile.exe // 'Debug' 폴더 내부에 생성됨.  

*bash(명령 프롬프트)*  
`cd [MPI_makefiles_001.exe 파일 경로. (=Debug 폴더 경로)]`  
ex) `cd ../hw5_Makefile/Debug`  
`mpiexec -n 4 hw5_Makefile.exe [바늘 갯수]`  
ex) `mpiexec -n 4 hw5_Makefile.exe 10000000`  

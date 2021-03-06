# Codes with Script 

이 하위 디렉토리에는 여러 알고리즘 문제들에 대한 솔루션 코드들을 정리해둡니다. 단, 해당 코드들에 대한 대본 수준의 영어 주석을 함께 첨부하여 코딩인터뷰에 대비할 수 있도록 합니다.

단순히 알아보기 위한 간략한 주석이 아닌, 그대로 읽으면 코드에 대한 설명이 될 수 있을 수준으로 기술하여야 합니다. 아래의 예시를 참고해주세요.

```C++
vector<int> spiralOrder(vector<vector<int> >& matrix) {
    // I will save the number of rows and colums into two variables rows, cols  
    int rows = matrix.size(); // first, let rows be the number of entire rows and get it from the size of first dimension of 2d-vector
    if(rows == 0) return {};  // and check the exceptional case that vector is empty 
    int cols = matrix[0].size(); // second, let cols be the number of entire columns and get it from the size() of  first row vector 
    if(cols == 0) return {};  // and also check the case that the number of column is zero 

    // blar blar 
}       
```

## Directory Convention 

`./{{Platform}}/{{ProblemTitle}}` 형식으로 디렉토리를 구성하는 것을 기본 규칙으로 하며, 해당 폴더 내에 코드 파일을 작성하면 됩니다. 다만 같은 문제, 같은 언어여도 다양한 솔루션이 존재할 수 있습니다. 그렇기에 소스코드 파일의 이름은 개략적으로 어떤 풀이인지를 구분할 수 있게 작성해주는게 좋습니다.

**예시** 

```shell
leetcode/
  ㄴ 4. Median of Two sorted array/
    ㄴ nlgn_solution.cpp
    ㄴ nlglgn_binary_search.cpp
    ㄴ nlgn_divide_and_conquer.cpp
```

### LeetCode

`/leetcode/{{ProblemTitle.extension}}` 형식으로 솔루션을 공유하며, 이 때 `{{ProblemTitle}}`은 문제 번호를 포함한 전체 이름이 될 수 있도록 주의해주세요.

예시
- `leetcode/4. Median of Two sorted array`
- `leetcode/54. Spiral Matrix`

### 기타(TODO)

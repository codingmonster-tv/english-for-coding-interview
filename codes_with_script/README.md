# Codes with Script 

이 하위 디렉토리에는 여러 알고리즘 문제들에 대한 솔루션 코드들을 정리해둡니다. 단, 해당 코드들에 대한 대본 수준의 영어 주석을 함께 첨부하여 코딩인터뷰에 대비할 수 있도록 합니다.

단순히 알아보기 위한 간략한 주석이 아닌, 그대로 읽으면 코드에 대한 설명이 될 수 있을 수준으로 기술하여야 합니다. 아래의 예시를 참고해주세요.

```C++
vector<int> spiralOrder(vector<vector<int> >& matrix) {
    // I will save the number of rows and colums into two variables rows, cols  
    int rows = matrix.size(); // first, let rows is the number of entire rows and get it from the size of first dimension 
    if(rows == 0) return {};  // and check the exceptional case that vector is empty 
    int cols = matrix[0].size(); // second, let cols is the number of entire cols and get it from first vector's size 
    if(cols == 0) return {};  // and also check the case that the number of column is zero 

    // blar blar 
}       
```
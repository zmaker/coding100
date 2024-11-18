int cols = 0;
int rows = 0;
int wcell = 10;

int[][] matrix;

int rule[] = {0,0,1,1,1,1,0,0};

void setup() {
  size(600, 500);
  background(0);
  cols = width / wcell;
  rows = height / wcell;
  setupcells(cols, rows);
  matrix[0][cols/2] = 1;
}

void draw() {
  for (int r = 0; r < rows-1; r++) {
    for (int i = 0; i < cols-3; i++){
      int ri = matrix[r][i]*4 + matrix[r][i+1]*2 + matrix[r][i+2];
      matrix[r+1][i+1] = rule[ri];
    }
  }
  
  for (int r = 0; r < rows; r++) {    
    for (int i = 0; i < cols; i++) {
      int xc = i * wcell;
      int yc = r * wcell;
      if (matrix[r][i] == 1) {
        fill(255);
      } else {
        fill(0);
        //stroke(255);
      } 
      rect(xc,yc, 10,10);
    }
  }
}

void setupcells(int c, int r){
  matrix = new int[r][c];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      matrix[i][j] = 0;
    }
  }  
}

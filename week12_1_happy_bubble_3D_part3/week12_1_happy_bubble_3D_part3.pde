//week12_1_happy_bubble_3D_part3
void setup(){
  size(300, 300, P3D);
}
int [][]state = new int[6][6];
void draw(){
  background(255,255,0);
  ortho();
  lights();
  noStroke();
  fill(#FF8BEA);
  for (int i=0; i<6; i++){
    for (int j=0; j<6; j++){
      pushMatrix();
      translate(25+j*50, 25+i*50);
      sphere(23);
      popMatrix();
    }
  }
}

void vizatoGjashtkendeshi(float qendraX, float qendraY, float rrezja) {
    const int numriAneve = 6;

    glColor3f(0.5f, 0.8f, 1.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < numriAneve; i++) {
        float kend = 2.0f * PI * i / numriAneve;
        float x = qendraX + rrezja * cos(kend);
        float y = qendraY + rrezja * sin(kend);
        glVertex2f(x, y);
    }
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < numriAneve; i++) {
        float kend = 2.0f * PI * i / numriAneve;
        float x = qendraX + rrezja * cos(kend);
        float y = qendraY + rrezja * sin(kend);
        glVertex2f(x, y);
    }
    glEnd();
}
void vizatoTrekendesh() {
    float centerX = WIDTH / 2.0f;
    float centerY = HEIGHT / 2.0f;
    float radius = 100.0f;

    glBegin(GL_TRIANGLES);
    
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(centerX, centerY + radius);
    
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(centerX - radius * 0.866f, centerY - radius * 0.5f);
    
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(centerX + radius * 0.866f, centerY - radius * 0.5f);
    
    glEnd();
}
constexpr int numTriangles = 146;
constexpr int numVertices = 438;

GLfloat vertices[438*2] = {
    -0.644154, 0.887982,
    -0.787299, 0.744836,
    -0.644154, 0.744836,
    -0.734768, -0.571486,
    -0.898050, -0.734768,
    -0.734768, -0.734768,
    -0.734768, -0.571486,
    -0.898050, -0.408205,
    -0.898050, -0.571486,
    -0.734768, -0.408205,
    -0.898050, -0.244923,
    -0.898050, -0.408205,
    -0.734768, -0.081641,
    -0.898050, -0.244923,
    -0.734768, -0.244923,
    -0.734768, 0.081641,
    -0.898050, -0.081641,
    -0.734768, -0.081641,
    -0.734768, 0.244923,
    -0.898050, 0.081641,
    -0.734768, 0.081641,
    -0.734768, 0.408205,
    -0.898050, 0.244923,
    -0.734768, 0.244923,
    -0.734768, 0.571486,
    -0.898050, 0.408205,
    -0.734768, 0.408205,
    -0.734768, 0.571486,
    -0.787299, 0.744836,
    -0.898050, 0.571486,
    0.734768, -0.734768,
    0.571486, -0.898050,
    0.734768, -0.898050,
    -0.571486, -0.734768,
    -0.734768, -0.898050,
    -0.571486, -0.898050,
    0.898050, -0.571486,
    0.734768, -0.734768,
    0.898050, -0.734768,
    0.734768, -0.571486,
    0.571486, -0.734768,
    0.734768, -0.734768,
    -0.571486, -0.571486,
    -0.734768, -0.734768,
    -0.571486, -0.734768,
    0.898050, -0.408205,
    0.734768, -0.571486,
    0.898050, -0.571486,
    0.734768, -0.408205,
    0.571486, -0.571486,
    0.734768, -0.571486,
    -0.571486, -0.408205,
    -0.734768, -0.571486,
    -0.571486, -0.571486,
    0.898050, -0.244923,
    0.734768, -0.408205,
    0.898050, -0.408205,
    0.734768, -0.244923,
    0.571486, -0.408205,
    0.734768, -0.408205,
    -0.571486, -0.244923,
    -0.734768, -0.408205,
    -0.571486, -0.408205,
    0.898050, -0.081641,
    0.734768, -0.244923,
    0.898050, -0.244923,
    0.734768, -0.244923,
    0.571486, -0.081641,
    0.571486, -0.244923,
    -0.571486, -0.081641,
    -0.734768, -0.244923,
    -0.571486, -0.244923,
    0.898050, -0.081641,
    0.734768, 0.081641,
    0.734768, -0.081641,
    0.734768, -0.081641,
    0.571486, 0.081641,
    0.571486, -0.081641,
    -0.571486, -0.081641,
    -0.734768, 0.081641,
    -0.734768, -0.081641,
    0.898050, 0.081641,
    0.734768, 0.244923,
    0.734768, 0.081641,
    0.734768, 0.244923,
    0.571486, 0.081641,
    0.734768, 0.081641,
    -0.571486, 0.244923,
    -0.734768, 0.081641,
    -0.571486, 0.081641,
    0.898050, 0.408205,
    0.734768, 0.244923,
    0.898050, 0.244923,
    0.734768, 0.408205,
    0.571486, 0.244923,
    0.734768, 0.244923,
    0.571486, 0.408205,
    0.297113, 0.458705,
    0.571486, 0.244923,
    0.297113, 0.577550,
    0.178268, 0.458705,
    0.297113, 0.458705,
    0.178268, 0.577550,
    0.059423, 0.458705,
    0.178268, 0.458705,
    0.059423, 0.577550,
    -0.059423, 0.458705,
    0.059423, 0.458705,
    -0.059423, 0.577550,
    -0.178268, 0.458705,
    -0.059423, 0.458705,
    -0.178268, 0.577550,
    -0.297113, 0.458705,
    -0.178268, 0.458705,
    -0.297113, 0.458705,
    -0.571486, 0.408205,
    -0.571486, 0.244923,
    -0.571486, 0.244923,
    -0.734768, 0.408205,
    -0.734768, 0.244923,
    0.898050, 0.571486,
    0.734768, 0.408205,
    0.898050, 0.408205,
    0.734768, 0.571486,
    0.571486, 0.408205,
    0.734768, 0.408205,
    0.571486, 0.571486,
    0.297113, 0.577550,
    0.571486, 0.408205,
    0.297113, 0.696395,
    0.178268, 0.577550,
    0.297113, 0.577550,
    0.178268, 0.696395,
    0.059423, 0.577550,
    0.178268, 0.577550,
    0.059423, 0.696395,
    -0.059423, 0.577550,
    0.059423, 0.577550,
    -0.059423, 0.696395,
    -0.178268, 0.577550,
    -0.059423, 0.577550,
    -0.178268, 0.696395,
    -0.297113, 0.577550,
    -0.178268, 0.577550,
    -0.297113, 0.577550,
    -0.571486, 0.571486,
    -0.571486, 0.408205,
    -0.571486, 0.571486,
    -0.734768, 0.408205,
    -0.571486, 0.408205,
    0.787299, 0.744836,
    0.734768, 0.571486,
    0.898050, 0.571486,
    0.644154, 0.744836,
    0.571486, 0.571486,
    0.734768, 0.571486,
    0.571486, 0.734768,
    0.297113, 0.696395,
    0.571486, 0.571486,
    0.297113, 0.815241,
    0.178268, 0.696395,
    0.297113, 0.696395,
    0.178268, 0.815241,
    0.059423, 0.696395,
    0.178268, 0.696395,
    0.059423, 0.815241,
    -0.059423, 0.696395,
    0.059423, 0.696395,
    -0.059423, 0.815241,
    -0.178268, 0.696395,
    -0.059423, 0.696395,
    -0.178268, 0.815241,
    -0.297113, 0.696395,
    -0.178268, 0.696395,
    -0.297113, 0.696395,
    -0.571486, 0.734768,
    -0.571486, 0.571486,
    -0.571486, 0.571486,
    -0.644154, 0.744836,
    -0.734768, 0.571486,
    0.787299, 0.887982,
    0.644154, 0.744836,
    0.787299, 0.744836,
    0.644154, 0.887982,
    0.571486, 0.734768,
    0.644154, 0.744836,
    0.571486, 0.734768,
    0.408205, 0.898050,
    0.297113, 0.815241,
    0.297113, 0.815241,
    0.244923, 0.898050,
    0.178268, 0.815241,
    0.178268, 0.815241,
    0.081641, 0.898050,
    0.059423, 0.815241,
    0.081641, 0.898050,
    -0.059423, 0.815241,
    0.059423, 0.815241,
    -0.081641, 0.898050,
    -0.178268, 0.815241,
    -0.059423, 0.815241,
    -0.244923, 0.898050,
    -0.297113, 0.815241,
    -0.178268, 0.815241,
    -0.408205, 0.898050,
    -0.571486, 0.734768,
    -0.297113, 0.815241,
    -0.571486, 0.898050,
    -0.644154, 0.744836,
    -0.571486, 0.734768,
    -0.734768, -0.734768,
    -0.898050, -0.734813,
    -0.734813, -0.898050,
    0.898050, -0.734813,
    0.898050, -0.734768,
    0.734768, -0.734768,
    -0.644154, 0.887982,
    -0.787299, 0.887982,
    -0.787299, 0.744836,
    -0.734768, -0.571486,
    -0.898050, -0.571486,
    -0.898050, -0.734768,
    -0.734768, -0.571486,
    -0.734768, -0.408205,
    -0.898050, -0.408205,
    -0.734768, -0.408205,
    -0.734768, -0.244923,
    -0.898050, -0.244923,
    -0.734768, -0.081641,
    -0.898050, -0.081641,
    -0.898050, -0.244923,
    -0.734768, 0.081641,
    -0.898050, 0.081641,
    -0.898050, -0.081641,
    -0.734768, 0.244923,
    -0.898050, 0.244923,
    -0.898050, 0.081641,
    -0.734768, 0.408205,
    -0.898050, 0.408205,
    -0.898050, 0.244923,
    -0.734768, 0.571486,
    -0.898050, 0.571486,
    -0.898050, 0.408205,
    -0.734768, 0.571486,
    -0.644154, 0.744836,
    -0.787299, 0.744836,
    0.734768, -0.734768,
    0.571486, -0.734768,
    0.571486, -0.898050,
    -0.571486, -0.734768,
    -0.734768, -0.734768,
    -0.734768, -0.898050,
    0.898050, -0.571486,
    0.734768, -0.571486,
    0.734768, -0.734768,
    0.734768, -0.571486,
    0.571486, -0.571486,
    0.571486, -0.734768,
    -0.571486, -0.571486,
    -0.734768, -0.571486,
    -0.734768, -0.734768,
    0.898050, -0.408205,
    0.734768, -0.408205,
    0.734768, -0.571486,
    0.734768, -0.408205,
    0.571486, -0.408205,
    0.571486, -0.571486,
    -0.571486, -0.408205,
    -0.734768, -0.408205,
    -0.734768, -0.571486,
    0.898050, -0.244923,
    0.734768, -0.244923,
    0.734768, -0.408205,
    0.734768, -0.244923,
    0.571486, -0.244923,
    0.571486, -0.408205,
    -0.571486, -0.244923,
    -0.734768, -0.244923,
    -0.734768, -0.408205,
    0.898050, -0.081641,
    0.734768, -0.081641,
    0.734768, -0.244923,
    0.734768, -0.244923,
    0.734768, -0.081641,
    0.571486, -0.081641,
    -0.571486, -0.081641,
    -0.734768, -0.081641,
    -0.734768, -0.244923,
    0.898050, -0.081641,
    0.898050, 0.081641,
    0.734768, 0.081641,
    0.734768, -0.081641,
    0.734768, 0.081641,
    0.571486, 0.081641,
    -0.571486, -0.081641,
    -0.571486, 0.081641,
    -0.734768, 0.081641,
    0.898050, 0.081641,
    0.898050, 0.244923,
    0.734768, 0.244923,
    0.734768, 0.244923,
    0.571486, 0.244923,
    0.571486, 0.081641,
    -0.571486, 0.244923,
    -0.734768, 0.244923,
    -0.734768, 0.081641,
    0.898050, 0.408205,
    0.734768, 0.408205,
    0.734768, 0.244923,
    0.734768, 0.408205,
    0.571486, 0.408205,
    0.571486, 0.244923,
    0.571486, 0.408205,
    0.297113, 0.577550,
    0.297113, 0.458705,
    0.297113, 0.577550,
    0.178268, 0.577550,
    0.178268, 0.458705,
    0.178268, 0.577550,
    0.059423, 0.577550,
    0.059423, 0.458705,
    0.059423, 0.577550,
    -0.059423, 0.577550,
    -0.059423, 0.458705,
    -0.059423, 0.577550,
    -0.178268, 0.577550,
    -0.178268, 0.458705,
    -0.178268, 0.577550,
    -0.297113, 0.577550,
    -0.297113, 0.458705,
    -0.297113, 0.458705,
    -0.297113, 0.577550,
    -0.571486, 0.408205,
    -0.571486, 0.244923,
    -0.571486, 0.408205,
    -0.734768, 0.408205,
    0.898050, 0.571486,
    0.734768, 0.571486,
    0.734768, 0.408205,
    0.734768, 0.571486,
    0.571486, 0.571486,
    0.571486, 0.408205,
    0.571486, 0.571486,
    0.297113, 0.696395,
    0.297113, 0.577550,
    0.297113, 0.696395,
    0.178268, 0.696395,
    0.178268, 0.577550,
    0.178268, 0.696395,
    0.059423, 0.696395,
    0.059423, 0.577550,
    0.059423, 0.696395,
    -0.059423, 0.696395,
    -0.059423, 0.577550,
    -0.059423, 0.696395,
    -0.178268, 0.696395,
    -0.178268, 0.577550,
    -0.178268, 0.696395,
    -0.297113, 0.696395,
    -0.297113, 0.577550,
    -0.297113, 0.577550,
    -0.297113, 0.696395,
    -0.571486, 0.571486,
    -0.571486, 0.571486,
    -0.734768, 0.571486,
    -0.734768, 0.408205,
    0.787299, 0.744836,
    0.644154, 0.744836,
    0.734768, 0.571486,
    0.644154, 0.744836,
    0.571486, 0.734768,
    0.571486, 0.571486,
    0.571486, 0.734768,
    0.297113, 0.815241,
    0.297113, 0.696395,
    0.297113, 0.815241,
    0.178268, 0.815241,
    0.178268, 0.696395,
    0.178268, 0.815241,
    0.059423, 0.815241,
    0.059423, 0.696395,
    0.059423, 0.815241,
    -0.059423, 0.815241,
    -0.059423, 0.696395,
    -0.059423, 0.815241,
    -0.178268, 0.815241,
    -0.178268, 0.696395,
    -0.178268, 0.815241,
    -0.297113, 0.815241,
    -0.297113, 0.696395,
    -0.297113, 0.696395,
    -0.297113, 0.815241,
    -0.571486, 0.734768,
    -0.571486, 0.571486,
    -0.571486, 0.734768,
    -0.644154, 0.744836,
    0.787299, 0.887982,
    0.644154, 0.887982,
    0.644154, 0.744836,
    0.644154, 0.887982,
    0.571486, 0.898050,
    0.571486, 0.734768,
    0.571486, 0.734768,
    0.571486, 0.898050,
    0.408205, 0.898050,
    0.297113, 0.815241,
    0.408205, 0.898050,
    0.244923, 0.898050,
    0.178268, 0.815241,
    0.244923, 0.898050,
    0.081641, 0.898050,
    0.081641, 0.898050,
    -0.081641, 0.898050,
    -0.059423, 0.815241,
    -0.081641, 0.898050,
    -0.244923, 0.898050,
    -0.178268, 0.815241,
    -0.244923, 0.898050,
    -0.408205, 0.898050,
    -0.297113, 0.815241,
    -0.408205, 0.898050,
    -0.571486, 0.898050,
    -0.571486, 0.734768,
    -0.571486, 0.898050,
    -0.644154, 0.887982,
    -0.644154, 0.744836,
    -0.734813, -0.898050,
    -0.734768, -0.898050,
    -0.734768, -0.734768,
    -0.734768, -0.734768,
    -0.898050, -0.734768,
    -0.898050, -0.734813,
    0.734768, -0.898050,
    0.734813, -0.898050,
    0.734768, -0.734768,
    0.734813, -0.898050,
    0.898050, -0.734813,
    0.734768, -0.734768,
};

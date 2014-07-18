#extension GL_OES_standard_derivatives : enable

/* Input */
varying vec4 v_Color;
varying vec2 v_Texcoord0;
uniform sampler2D u_Texture0;

void main()
{
    /* Sample the current texture */
    // old direct x texture coordinates have pixel center at 0.0, while opengl has it at 0.5,0.5
    // using derivatives of texture coordinates, to add half a pixel to all texture coordinates
    vec2 texcoord = vec2( dFdx(v_Texcoord0.x)*0.5, dFdy(v_Texcoord0.y)*0.5 ) + v_Texcoord0;
    gl_FragColor = texture2D( u_Texture0, texcoord ) * v_Color;
}


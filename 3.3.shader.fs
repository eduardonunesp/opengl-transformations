#version 330 core
out vec4 frag_color;

in vec2 our_tex_coord;

// texture samplers
uniform sampler2D texture1;
uniform sampler2D texture2;

void main()
{
	// linearly interpolate between both textures (80% container, 20% awesomeface)
	frag_color = mix(texture(texture1, our_tex_coord), texture(texture2, our_tex_coord), 0.2);
}

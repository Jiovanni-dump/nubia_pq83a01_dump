#version 300 es

precision mediump float;

in vec2 vTexCoor;
uniform sampler2D sTexture;
out vec4 uFragColor;
uniform float alpha;

void main() {
	if(vTexCoor.t > 0.5) {
		uFragColor = texture(sTexture, vec2(vTexCoor.s, 1.0-vTexCoor.t));
	}
	else {
		uFragColor = texture(sTexture, vTexCoor);
	}
}

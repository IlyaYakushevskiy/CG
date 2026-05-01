
to debug: 
```
cmake -DCMAKE_BUILD_TYPE=Debug ..
make
lldb ./Exercise1

(lldb) run
```
### OpenGL
OpenGL is best understood as a state machine. Rather than calling a function that "does" something immediately, you typically call functions to change the "state" of the GPU (like "use this texture" or "use this shader"), and then call a "Draw". Actual code lives in GPU drivers, OpenGL is just a specification of functions 
Modules: 
- GLEW : loader to  GPU at the runtime 
    - glGenBuffers() glBindVertexArray()
- GLFW : windowing library for your OS 
- GLM : openGL Mathematics (matrices are column-major ! )


____________________________________________________________
Lecture 23.02.2026

### Explicit representations 

- 21: duplicates are proplematic: storage and editiong issues  (1,2,3) and (2,4,5) both store vertex 2 

- 23: graphs are cooler : 
    - Euler's Formula  Vertices - Edges + Faces = 2 , for triangles whe have 3 edges, 3 V pro face, 
- 26: Is a clear problem in the middle: walking one one bended plane is fine, in disconinuity in the midle one can go on 2 manifolds which is unidentified behaviour 
- genus characterises topology of the object : number of "handles"

Lecture 2.05.26
### Homogeneous coordinates 

Extended the vector state into 4D -> use 4th d for translations , operations which preserve translational symmetry (s.a. rotation) will just extend a_n,n with W, then devide vector by W -> [x/W, y/w , 1] 


Lecture 9.02.2026

### Viewing 

- 6: parallel projection is simpler case and is used at camera dist -> inf 
- 21: VUP fixes the rotation 

### 10 : Projection 

Lecture 16.03.2026

### 14 Texturing 

We need parametric coords to realise locaro coord on manifold 

Prpblems:  no 3d obj can be flattened without distorion : e.g. lambert's earth projection 

- mipmap is used in anti-aliasing , the further object gets from the camera -- we interpolate to reduce the resolution of tecture based on the distance. Aliasing occures when the frequancy of the pattern increases due to distance -> creause wiggly distortions


### 15 : Bump Mapping

- does not affect rendering of the surface, but modifies the normals by taking derivatives of the bump map. 
- Normal Perturbation requires more complex map but 


### 17: Shadows

- light buffer is reconstructed from the "z-buffer" , the depth buffer updated in the camera  
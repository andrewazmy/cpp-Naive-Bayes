# Implementing Naive Bayes

[image1]: ./imgs/img_01.png "img_01.png"

In this project implemented a Gaussian Naive Bayes classifier to predict the behavior of vehicles on a highway. 

In the image below there are behaviors on a 3 lane highway (with lanes of 4 meter width). The dots represent the d (y axis) and s (x axis) coordinates of vehicles as they either...

1. change lanes left (shown in blue)
2. keep lane (shown in black)
3. or change lanes right (shown in red)

Classifier can predict which of these three maneuvers a vehicle is engaged in given a single coordinate (sampled from the trajectories shown below).

![alt text][image1]

### Each coordinate contains 4 pieces of information:

* **s** - distance along the road (longitudinal displacement)
* **d** - side-to-side position on the road (lateral displacement)
* **s_dot** - velocity of the car along the s axis (for longitudinal displacement)
* **d_dot** - velocity of the car along the d axis (for lateral displacement)

The lane width is 4 meters (this might be helpful in engineering features for an algorithm).

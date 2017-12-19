// This program publishes randomly-generated velocity
// messages for turtlesim.
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>  // For geometry_msgs::Twist
#include <stdlib.h> // For rand() and RAND_MAX

int main(int argc, char **argv) {
  // Initialize the ROS system and become a node.
  ros::init(argc, argv, "publish_velocity");
  ros::NodeHandle nh;

  // Create a publisher object.
  ros::Publisher pub = nh.advertise<geometry_msgs::Twist>(
    "turtle1/cmd_vel", 1000); //links publisher to the node

  // Seed the random number generator.
  //srand(time(0));

  // Loop at 2Hz until the node is shut down.
  ros::Rate rate(2);


//**Try to loop the linear speed for one line for L, then rotate, then draw second line
//ROTATE -90 DEGREES***********************************
int u=0; //INITIALLIZE u FOR WHILE LOOP
while(u<5.5)
{
    // Create and fill in the message.  The other four
    // fields, which are ignored by turtlesim, default to 0.
    geometry_msgs::Twist msg; //Object msgs
    msg.linear.x = 0;	//THIS DEALS WITH LINEAR SPEED
    msg.angular.z = -0.65;//THIS DEALS WITH ROTATIONAL SPEED
u++; //INCREMENT u BY 1

    // Publish the message.
    pub.publish(msg);	//NEED IN ORDER TO ANIMATE

    // Send a message to rosout with the details.
    //ROS_INFO_STREAM("Sending random velocity command:"
      //<< " linx=" << msg.linear.x);
      //<< " angular=" << msg.angular.z);

    // Wait until it's time for another iteration.
    rate.sleep();
}

//DRAW 1ST LINE FOR "L"******************************
u=0;	//RESETS u FOR THE WHILE LOOP
while(u<5)
{
    // Create and fill in the message.  The other four
    // fields, which are ignored by turtlesim, default to 0.
    geometry_msgs::Twist msg; //Object msgs
    msg.linear.x = 1.5;	//THIS DEALS WITH LINEAR SPEED
    msg.angular.z = 0;//THIS DEALS WITH ROTATIONAL SPEED
u++; //INCREMENT u BY 1

    // Publish the message.
    pub.publish(msg);	//NEED IN ORDER TO ANIMATE

    // Send a message to rosout with the details.
    //ROS_INFO_STREAM("Sending random velocity command:"
      //<< " linx=" << msg.linear.x);
      //<< " angular=" << msg.angular.z);

    // Wait until it's time for another iteration.
    rate.sleep();
}

//ROTATE +90 DEGREES**********************************
u=0; //INITIALLIZE u FOR WHILE LOOP
while(u<4.5)
{
    // Create and fill in the message.  The other four
    // fields, which are ignored by turtlesim, default to 0.
    geometry_msgs::Twist msg; //Object msgs
    msg.linear.x = 0;	//THIS DEALS WITH LINEAR SPEED
    msg.angular.z = 0.65;//THIS DEALS WITH ROTATIONAL SPEED
u++; //INCREMENT u BY 1

    // Publish the message.
    pub.publish(msg);	//NEED IN ORDER TO ANIMATE

    // Send a message to rosout with the details.
    //ROS_INFO_STREAM("Sending random velocity command:"
      //<< " linx=" << msg.linear.x);
      //<< " angular=" << msg.angular.z);

    // Wait until it's time for another iteration.
    rate.sleep();
}

//DRAW 2ND LINE FOR "L"******************************
u=0;	//RESETS u FOR THE WHILE LOOP
while(u<5)
{
    // Create and fill in the message.  The other four
    // fields, which are ignored by turtlesim, default to 0.
    geometry_msgs::Twist msg; //Object msgs
    msg.linear.x = 1;	//THIS DEALS WITH LINEAR SPEED
    msg.angular.z = 0;//THIS DEALS WITH ROTATIONAL SPEED
u++; //INCREMENT u BY 1

    // Publish the message.
    pub.publish(msg);	//NEED IN ORDER TO ANIMATE

    // Send a message to rosout with the details.
    //ROS_INFO_STREAM("Sending random velocity command:"
      //<< " linx=" << msg.linear.x);
      //<< " angular=" << msg.angular.z);

    // Wait until it's time for another iteration.
    rate.sleep();
}
}


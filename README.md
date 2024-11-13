# Levi - Autonomous Disaster Response Robot

## Team Members and Roles

### Miraj Shafek (Team Lead, Hardware & Software Developer)
Miraj is responsible for overseeing the project, focusing on both hardware integration and software development. With expertise in Raspberry Pi, computer vision, and machine learning, Miraj brings advanced problem-solving skills, proven by his success in previous hackathons.

### Kishwar Rayat (Hardware Specialist & Designer)
Kishwar is in charge of the design and construction of the robot. He ensures the hardware is built to specification, and works seamlessly with the software to create a functional and reliable system for disaster management.

## Project Overview: Levi - Autonomous Disaster Response Robot

Levi is an innovative and intelligent disaster response robot designed to address the challenges posed by human-made and natural disasters such as wildfires, gas leaks, and landslides. Levi offers an autonomous, efficient, and multi-functional approach to disaster management, providing real-time environmental monitoring, rescue operations, and emergency response support.

### Features

1. **Autonomous Navigation and Self-Driving System**  
   Levi uses an advanced self-driving system powered by OpenCV and NumPy, enabling it to autonomously navigate disaster-affected areas. It detects lanes and traffic signals to ensure safe and efficient travel through hazardous environments.

2. **Firefighting System**  
   Upon reaching a fire zone, Levi activates its firefighting system to control and extinguish the blaze, helping to reduce the spread and impact of wildfires.

3. **Facial Recognition for Victim Identification**  
   Levi utilizes facial recognition to identify victims during a disaster. It matches faces against a database and transmits the patient’s medical history to an operational website, helping doctors prepare for treatment based on the patient's condition.

4. **Environmental Monitoring**  
   Equipped with sensors, Levi monitors key environmental factors such as gas leaks, air pollution, and other hazardous conditions. It sends real-time updates to the operational website, alerting authorities and enabling prompt responses.

5. **Robotic Arm for Debris Removal**  
   In the aftermath of landslides or earthquakes, Levi uses its robotic arm to clear debris, facilitating rescue operations and helping ensure the safety of first responders.

6. **7-Inch Touchscreen Display**  
   Levi is equipped with a 7-inch touchscreen that provides on-site personnel with easy access to its functionality and data. This allows emergency responders to interact with the robot without compromising privacy or sensitive information.

### How It Works

Levi integrates hardware and software systems to perform disaster response tasks autonomously. The robot’s navigation capabilities are powered by computer vision, enabling it to avoid obstacles and navigate through challenging terrain. Once a disaster zone is reached, Levi’s firefighting system is activated for fire suppression, and it uses its sensors to detect gas leaks and air pollution.

In cases where individuals are found, Levi’s facial recognition system identifies the person and transmits their medical history to a secure website, allowing doctors to prepare for their treatment remotely.

Additionally, the robot’s robotic arm assists in clearing obstacles or debris, ensuring rescue teams have a clear path to reach victims.

### Summary

Levi is a versatile, autonomous robot designed to help mitigate the effects of natural and human-made disasters. With capabilities ranging from firefighting and victim identification to environmental monitoring and debris removal, Levi serves as a critical tool for emergency response teams and first responders.

## Technologies Used

- **Raspberry Pi** for controlling and processing data from sensors
- **OpenCV** for computer vision tasks such as navigation and obstacle detection
- **NumPy** for processing sensor data and implementing machine learning algorithms
- **Facial Recognition** for victim identification
- **Sonar and Gyroscopes** for stability and obstacle avoidance
- **Robotic Arm** for debris removal

## Installation and Setup

Coming soon! This section will include detailed instructions on setting up Levi for your own disaster response needs.

---

Feel free to contribute or contact us for more information. Together, we can help reduce the impact of natural disasters and save lives with the power of robotics!
### Evolution of the Project Idea

Initially, our project began with the idea of assisting injured people during natural disasters. We thought about connecting doctors and patients remotely, enabling doctors to assist even in hard-to-reach areas. However, we quickly realized that getting the injured to a hospital as soon as possible was just as important. Relying on manual intervention in such crises may not be feasible, so we decided to develop a self-driving system for the robot to autonomously transport injured patients to safety.

Our next step was to create an intelligent self-driving system using computer vision (OpenCV) and machine learning. This system enables **Disfren Man** to detect lanes, traffic signals, and obstacles, ensuring smooth and safe transportation. To enhance its capabilities, we added sensors like sonar and gyroscopes to improve stability and accuracy.

As the project evolved, we also focused on ensuring the connection between the patient and the doctor was seamless. Whenever **Disfren Man** recognizes a patient through facial recognition, their medical history is immediately sent to a connected website. This allows doctors to prepare for the patient’s arrival, reviewing their medical records in advance.

Finally, we expanded the project's scope to address various environmental hazards. For instance, **Disfren Man** continuously monitors for gas leaks, air pollution, and other harmful substances, updating the data on the website for public safety. We also added a robotic arm capable of removing debris in the event of landslides or earthquakes, providing faster rescue operations.

Each step in the project’s evolution aimed at integrating advanced hardware, software, and safety mechanisms to create a comprehensive solution for disaster management.
Construction of the Solution
1. Hardware Components
Raspberry Pi 4 Model B: The main processing unit for handling complex tasks like self-driving, computer vision, and website integration. It runs the primary software for object detection and face recognition.
Arduino Mega: Controls the robotic arm, motors, and various sensors, responsible for real-time decision-making and precise control of the robotic components.
HC-SR04 Sonar Sensor: Used for obstacle detection, measuring the distance to nearby objects, helping the robot navigate through debris or rough terrain.
MQ135 Air Quality Sensor: Continuously monitors air quality, specifically detecting harmful gases like CO2 and methane, and reports findings via the web interface.
7-inch Touch Display: The robot is equipped with a 7-inch touchscreen, allowing operators or first responders to interact with the robot directly in real-time. It provides a user-friendly interface for controlling the robot, accessing system diagnostics, and viewing critical data such as environmental readings and patient information. The touchscreen is integrated with the Raspberry Pi 4, running the control dashboard designed for ease of use during emergency situations.
MPU6050 Gyroscope and Accelerometer: Provides stability by detecting the robot's orientation and movement, ensuring smooth navigation even on uneven surfaces.
L293D Motor Driver Shield: Controls the 4 DC motors and ensures efficient power distribution to achieve reliable motion.
4x 20 RPM Motors with Encoders: Offer precise control of the robot’s movement, allowing it to navigate autonomously with high accuracy.
Webcam: Facilitates real-time video streaming for object and lane detection, as well as facial recognition for identifying injured individuals.
Robotic Arm: A multi-joint robotic arm, used for debris removal during landslides or earthquakes, allowing for precise manipulation of objects in the disaster zone.
2. Software Components
Python (OpenCV): The backbone of the computer vision system, responsible for lane detection, traffic signal recognition, and object detection. It processes real-time video feeds from the webcam.
YOLO (You Only Look Once) Algorithm: A deep learning model for fast and accurate object detection, crucial for identifying obstacles and recognizing objects in disaster scenarios.
Dlib: Used for facial landmark detection, essential for face recognition and patient identification in the robot's medical assistance mode.
Face Recognition Library: Employed to identify injured patients by comparing their faces with a pre-existing medical database and sending data to the Disfren Man website.
Flask (Web Development): A Python web framework that powers the Disfren Man operational website, facilitating doctor-patient data exchange, and reporting environmental hazards in real-time.
HTML/CSS/JavaScript: Used to design the user-friendly web interface for Disfren Man's operational website.
Arduino IDE: Used to program the Arduino Mega, which controls the motors, sensors, and robotic arm.
Object Detection Algorithms: Leveraged for tasks such as identifying debris during landslides and removing them using the robotic arm.
3. Frame Construction
The robot's frame is constructed from lightweight, durable materials to provide better stability and mobility in harsh environments. Extensive testing and prototyping were conducted to achieve the optimal design. The focus was on ensuring a balance between durability and maneuverability, allowing the robot to operate efficiently in disaster zones without sacrificing stability or actionability.
4. Tuning and Testing
Self-Driving System: The robot’s self-driving system was rigorously tested in various environments using a combination of lane detection and traffic signal recognition. The algorithms were fine-tuned for real-world accuracy, and the system is capable of driving autonomously to disaster sites using real-time data from the sonar and webcam.
Face Recognition & Website Integration: Multiple test runs were conducted to ensure seamless communication between the face recognition module and the Disfren Man website. Patient identification was tested using Dlib and YOLO models to ensure reliable recognition even in low-visibility conditions.
Robotic Arm: We tested the combination of computer vision and robotic arm controls extensively for debris removal tasks, ensuring that the robot could identify and manipulate objects with precision and stability.
5. Power Supply
15W Power Bank: Used to power the Raspberry Pi 4 and the 7-inch touch display. It provides enough power for continuous operation during the robot’s missions.
1500mAh 12V LiPo Battery: Powers the motors, sensors, and other components, ensuring reliable and long-lasting performance during rescue and firefighting operations. The power system was optimized for efficiency, allowing all components to function simultaneously without draining the battery too quickly.


Challenges During the Development Process
During the development of the automated disaster management and treatment robot, several challenges were encountered that required significant troubleshooting and iteration. Below is an overview of the primary difficulties faced:
Self-Driving Navigation Tuning: One of the major challenges was fine-tuning the self-driving functionality of the robot. Training the machine learning models to correctly detect and navigate roads proved to be complex. There were difficulties in feeding the robot sufficient and accurate data to ensure reliable road detection. Additionally, adjusting the camera angle to capture the road accurately from various perspectives required substantial experimentation.
Environmental Adaptability: Another challenge was training the robot to operate effectively in diverse disaster scenarios, such as landslides, wildfires, and floods. Ensuring that the robot could autonomously recognize and respond to different environmental conditions required extensive testing in simulated disaster environments. This involved fine-tuning the robot’s sensors and decision-making algorithms to adapt and perform rescue operations under highly dynamic and unpredictable circumstances.
Camera Calibration and Data Collection: Calibrating the robot’s camera system was particularly challenging. Achieving the optimal positioning and angle for real-time detection of obstacles, people, and roads was crucial to its autonomous functionality. Collecting and preprocessing large amounts of visual data for the machine learning models also proved time-consuming.
Weather Detection and Response: Integrating weather detection sensors and ensuring that the robot could adjust its operations based on weather conditions posed additional difficulties. For example, ensuring the robot could effectively operate in heavy rainfall or avoid slippery terrain during floods required precise sensor calibration and software adjustments.
Communication System for Medical Assistance: The robot's ability to automatically search for and communicate with doctors through an integrated website presented challenges in establishing reliable and real-time connections. Ensuring seamless integration with the website to identify and contact medical personnel without delay was a complex task.
Rescue and Patient Transportation: Designing the robot to safely transport patients from disaster zones to hospitals was another significant challenge. Ensuring that the robot could securely carry patients, navigate through challenging terrains, and handle the delicate process of patient transfer required both mechanical and software enhancements.
Power Management: Given the diverse range of tasks the robot was designed to perform, managing its power consumption efficiently was essential. The robot needed to maintain adequate power for extended periods during rescue missions while still performing high-demand tasks such as firefighting and flood rescue.
These challenges were addressed through continuous testing, refinement, and improvement of both the hardware and software systems of the robot.
Coding of the solution: github repo:Hi-Miraj/Future_Ino_WRO (github.com)


Social Impact and Innovation

The development of this automated disaster management and treatment robot stands as a breakthrough in addressing critical challenges faced during natural disasters and emergencies. Its potential to save lives and streamline disaster response offers significant social and humanitarian benefits. Below are the key aspects of its social impact and innovation:

Life-Saving Efficiency: The robot's ability to autonomously navigate disaster zones and provide immediate assistance greatly reduces response time in emergency situations. Whether it’s rescuing victims from landslides, transporting them to hospitals, or acting as a firefighter in wildfires, the robot can operate in dangerous environments where human intervention might be delayed or impossible. This quick action can save countless lives in critical situations.

Accessibility in Remote and Hazardous Areas: Many disaster-prone areas are difficult for traditional rescue teams to reach. By leveraging self-driving technology, the robot can independently access remote regions affected by floods, landslides, or other natural calamities, bringing essential medical and rescue services to places that may otherwise be inaccessible.

Reduced Risk to Human Rescuers: In extreme disaster scenarios, rescue workers often risk their own safety to assist others. This robot can mitigate that risk by taking on the most dangerous tasks, such as entering unstable structures, navigating flooded areas, or working in extreme weather conditions. By performing these life-threatening duties, the robot minimizes the potential for injury or loss of life among human rescuers.

Integration of Technology with Medical Response: The robot's innovative integration of autonomous navigation, medical assistance, and communication with healthcare professionals through an embedded website is a revolutionary step forward. By searching for doctors and facilitating patient care decisions remotely, it allows for more effective and efficient disaster response coordination. This seamless connection between technology and healthcare increases the overall effectiveness of emergency medical treatment.

Environmental Adaptation: The ability of the robot to detect and respond to weather conditions represents a significant advancement in disaster management. Whether it's detecting fires during wildfires or navigating through flood waters, the robot's adaptability ensures that it can perform multiple roles in disaster scenarios. This innovation positions the robot as a versatile and scalable solution to a wide range of global disasters.

Long-Term Sustainability and Scalability: The robot's design prioritizes reusability and adaptability, making it a sustainable solution for long-term disaster management. Its potential for scalability ensures that similar models can be deployed worldwide, allowing communities in disaster-prone regions to benefit from advanced technology without the need for large rescue teams or costly equipment.

In summary, this robot combines cutting-edge technological advancements with practical humanitarian applications, making it a valuable tool for reducing human suffering during natural disasters. Its innovative approach to autonomous rescue operations and medical assistance paves the way for more intelligent, efficient, and safe disaster management systems.

Challenges During the Development Process:

During the development of the automated disaster management and treatment robot, several challenges were encountered that required significant troubleshooting and iteration. Below is an overview of the primary difficulties faced:

Self-Driving Navigation Tuning: One of the major challenges was fine-tuning the self-driving functionality of the robot. Training the machine learning models to correctly detect and navigate roads proved to be complex. There were difficulties in feeding the robot sufficient and accurate data to ensure reliable road detection. Additionally, adjusting the camera angle to capture the road accurately from various perspectives required substantial experimentation.

Environmental Adaptability: Another challenge was training the robot to operate effectively in diverse disaster scenarios, such as landslides, wildfires, and floods. Ensuring that the robot could autonomously recognize and respond to different environmental conditions required extensive testing in simulated disaster environments. This involved fine-tuning the robot’s sensors and decision-making algorithms to adapt and perform rescue operations under highly dynamic and unpredictable circumstances.

Camera Calibration and Data Collection: Calibrating the robot’s camera system was particularly challenging. Achieving the optimal positioning and angle for real-time detection of obstacles, people, and roads was crucial to its autonomous functionality. Collecting and preprocessing large amounts of visual data for the machine learning models also proved time-consuming.

Weather Detection and Response: Integrating weather detection sensors and ensuring that the robot could adjust its operations based on weather conditions posed additional difficulties. For example, ensuring the robot could effectively operate in heavy rainfall or avoid slippery terrain during floods required precise sensor calibration and software adjustments.

Communication System for Medical Assistance: The robot's ability to automatically search for and communicate with doctors through an integrated website presented challenges in establishing reliable and real-time connections. Ensuring seamless integration with the website to identify and contact medical personnel without delay was a complex task.

Rescue and Patient Transportation: Designing the robot to safely transport patients from disaster zones to hospitals was another significant challenge. Ensuring that the robot could securely carry patients, navigate through challenging terrains, and handle the delicate process of patient transfer required both mechanical and software enhancements.

Power Management: Given the diverse range of tasks the robot was designed to perform, managing its power consumption efficiently was essential. The robot needed to maintain adequate power for extended periods during rescue missions while still performing high-demand tasks such as firefighting and flood rescue.

These challenges were addressed through continuous testing, refinement, and improvement of both the hardware and software systems of the robot.

The development of this automated disaster management and treatment robot stands as a breakthrough in addressing critical challenges faced during natural disasters and emergencies. Its potential to save lives and streamline disaster response offers significant social and humanitarian benefits. Below are the key aspects of its social impact and innovation:

Life-Saving Efficiency: The robot's ability to autonomously navigate disaster zones and provide immediate assistance greatly reduces response time in emergency situations. Whether it’s rescuing victims from landslides, transporting them to hospitals, or acting as a firefighter in wildfires, the robot can operate in dangerous environments where human intervention might be delayed or impossible. This quick action can save countless lives in critical situations.

Accessibility in Remote and Hazardous Areas: Many disaster-prone areas are difficult for traditional rescue teams to reach. By leveraging self-driving technology, the robot can independently access remote regions affected by floods, landslides, or other natural calamities, bringing essential medical and rescue services to places that may otherwise be inaccessible.

Reduced Risk to Human Rescuers: In extreme disaster scenarios, rescue workers often risk their own safety to assist others. This robot can mitigate that risk by taking on the most dangerous tasks, such as entering unstable structures, navigating flooded areas, or working in extreme weather conditions. By performing these life-threatening duties, the robot minimizes the potential for injury or loss of life among human rescuers.

Integration of Technology with Medical Response: The robot's innovative integration of autonomous navigation, medical assistance, and communication with healthcare professionals through an embedded website is a revolutionary step forward. By searching for doctors and facilitating patient care decisions remotely, it allows for more effective and efficient disaster response coordination. This seamless connection between technology and healthcare increases the overall effectiveness of emergency medical treatment.

Environmental Adaptation: The ability of the robot to detect and respond to weather conditions represents a significant advancement in disaster management. Whether it's detecting fires during wildfires or navigating through flood waters, the robot's adaptability ensures that it can perform multiple roles in disaster scenarios. This innovation positions the robot as a versatile and scalable solution to a wide range of global disasters.

Long-Term Sustainability and Scalability: The robot's design prioritizes reusability and adaptability, making it a sustainable solution for long-term disaster management. Its potential for scalability ensures that similar models can be deployed worldwide, allowing communities in disaster-prone regions to benefit from advanced technology without the need for large rescue teams or costly equipment.

In summary, this robot combines cutting-edge technological advancements with practical humanitarian applications, making it a valuable tool for reducing human suffering during natural disasters. Its innovative approach to autonomous rescue operations and medical assistance paves the way for more intelligent, efficient, and safe disaster management system.


Impact of the Solution on Local and Global Society

This disaster management and treatment robot has the potential to redefine the way communities worldwide respond to natural and man-made catastrophes. Its unique combination of autonomous navigation, real-time medical assistance, and environmental adaptability positions it as a groundbreaking solution with far-reaching impacts on both local and global scales.

Empowering Local Communities: In disaster-prone regions, the robot empowers local communities by offering an immediate, reliable response system. This not only saves lives but also helps reduce dependence on external aid, allowing communities to be more resilient and self-sufficient in the face of calamities. By automating complex rescue operations, the robot minimizes the need for specialized rescue teams, enabling smaller communities with limited resources to manage large-scale disasters effectively.

Democratizing Disaster Response: Traditionally, disaster relief is heavily reliant on centralized, resource-intensive operations that are often delayed due to logistical challenges. This robot decentralizes disaster management, making life-saving technology accessible to both developed and underdeveloped regions. It provides a cost-effective solution that can be deployed in rural villages, densely populated urban centers, or even conflict zones, ensuring equitable access to advanced rescue technology.

Global Collaboration and Scalability: On a global scale, this solution represents a collaborative opportunity for nations to share life-saving technology and expertise. Its modular and scalable design allows it to be adapted to various geographic and environmental conditions. Governments, international organizations, and NGOs can deploy fleets of these robots across borders, creating a unified global response network to natural disasters, epidemics, and environmental crises.

Shifting the Paradigm of Humanitarian Aid: The robot’s innovative combination of autonomous technology and medical support is a paradigm shift in humanitarian aid. It bridges the gap between immediate disaster response and long-term recovery efforts by not only rescuing victims but also providing real-time medical care and facilitating access to healthcare professionals. This integration of technology into the humanitarian field signifies a new era in which machines can take on critical roles in preserving human life, even in the most dangerous environments.

Climate Resilience and Environmental Impact: As the frequency of climate-related disasters continues to rise, this robot provides an environmentally conscious solution that responds to the urgent need for climate resilience. By offering real-time response during wildfires, floods, and storms, the robot aids in minimizing environmental damage and protecting endangered ecosystems. Its ability to adapt to weather patterns and navigate hazardous conditions ensures that it can be deployed in response to the growing threats posed by climate change.

Redefining Safety and Reducing Casualties: Globally, millions of lives are lost every year to disasters due to delayed or insufficient rescue efforts. This robot changes the game by being a first responder that eliminates human risk during rescue missions, drastically reducing casualties among both victims and rescuers. Its ability to work in perilous environments, such as collapsed buildings, fire-prone areas, or floodwaters, ensures that fewer lives are lost during the most dangerous stages of disaster recovery.

In essence, this robot is not just a piece of advanced technology—it is a symbol of hope and resilience for local communities and global society. By combining state-of-the-art engineering with humanitarian goals, it has the power to save lives, rebuild communities, and foster global cooperation in disaster management, leaving an enduring impact on the future of emergency response worldwide.



Practical Use Case of Disfren Man
Imagine a wildfire outbreak in a remote forested area with limited access for emergency personnel. Disfren Man can be deployed to this location autonomously. Once activated, it navigates through the rugged terrain using its self-driving system powered by computer vision algorithms, avoiding obstacles and following lanes to reach the fire zone.
Upon arrival, Disfren Man activates its firefighting system. Using real-time data from its sensors, it identifies the most intense areas of the fire and strategically directs water or fire retardants to extinguish the flames. While operating, its air quality sensors (MQ135) monitor for any harmful gas leaks, such as carbon monoxide, immediately alerting nearby teams or residents through its integrated website.
If the robot detects any injured individuals using its facial recognition system, it automatically accesses the patient’s medical history from the connected database and sends the relevant information to medical professionals via the Disfren Man operational website. While the patient is being transported to safety using its autonomous driving capabilities, the doctor can prepare by reviewing the patient's medical records in advance, allowing for better emergency care upon arrival.
In another scenario, during a post-earthquake rescue mission, Disfren Man can be deployed to areas blocked by debris. Using its robotic arm and computer vision system, it carefully removes debris and clears paths for rescue teams. Simultaneously, it continues to monitor the air for hazardous substances and reports updates to the website, allowing the community to stay informed in real-time.
This real-world deployment shows how Disfren Man not only addresses immediate threats like fire or injured victims but also enhances communication between medical teams, the public, and the robot itself, providing a comprehensive disaster response solution.


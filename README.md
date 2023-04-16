# Smart Bin Ecosystem

___

### Objective:

___


### Project Description:
<p>
    Overflowing of "Garbage Cans" us a major menace in the cities. These debris harms physical
    habitats, transport chemical pollutants,and threatens surrdounding life. The proper management
    of these bins through proper disposal of waste by the people and collection by the local government
    (MCD) is very necessary.
</p>
<p>
    Smart Bin would be deployed in each location ina distict foaring a conection. The 
    user will have to create an account to access and dispose of their garbage. The bin would
    only accept garbage till a fixed volumne and would provide credit to the user and would alert
    the local garbage collector to collect from those bins and any other if they have crossed the desired threshhold.
</p>

___

### Methodolgy:
<p>
    
    #### Hardware configuration:
    <p>
        Need to Install ultrasonic sensors in each trash can to measure the amount of garbage. I went thro and found HC-SR04 to be the best if anyone has any better alternatives do suggest.
        
        
        - Connect the sensors to a microcontroller, such as an Arduino or Raspberry Pi, that communicates with the cloud server. 
        - Then need to Install a relay switch that can be activated by the microcontroller to turn off the garbage can when the refuse level reaches 90 percent.
        - Then we will Connect the microcontroller to a Wi-Fi or cellular network so that sensor data can be transmitted to the cloud server.
        - Cloud server setup:
            
            * We can use a database to store sensor data for historical analysis and visualisation within a web application.
            * Need to analyse the data and predict (which algo to use me and vivek will sort that out ) when the receptacle will reach 90 percent capacity. This will allow the system to take preventative measures prior to the trash can overflowing.
            * Implement a control algorithm that will activate the relay switch to turn off the refuse container when the waste level reaches 90 percent.
        
        - Web app development:
            
            * Develop a web application that displays the current refuse level, location, and time of each trash can in real time.
            * Create a dashboard that displays historical data for each trash can, including the refuse level over time and the frequency of trash collection.
            * Implement user authentication to limit interface access to only authorised users.

    </p>

    <p> 
        For smart garbage management, Garbage Guardian uses the IoT, Google Cloud, and AMD EC2. Trash cans will be monitored by ultrasonic sensors and microcontrollers, which turn on a relay switch at 90% capacity to stop the overflow. The web app, hosted on  EC2 and displays real-time refuse levels, location, and historical data for authorised users that will be processed on Google Cloud. This ground-breaking project encourages environmental cleanliness, improving public health and trash management.
    </p>

    #### EC2 AND GOOGLE CLOUD INTEGRATION OVERVIEW FOR OUR PROJECT
    <p>
        - Google Cloud setup:
            a. Set up a Cloud IoT Core registry to securely connect and manage your IoT devices.
            b. Set up a Firestore database to store the sensor data.
            c. Deploy a Cloud Function to process and store the incoming sensor data, and use this function to analyze the data and activate the relay switch when necessary.
        
        - AWS EC2 setup:
            a. Create an EC2 instance for your server, and install necessary software like Node.js, Python, or any other tools you need.
            b. Host your web application directly on your EC2 instance.
            c. Use Amazon Cognito for user authentication.
        
        - Configure the microcontroller to connect to Google Cloud IoT Core:
        For Arduino or Raspberry Pi, use the Google Cloud IoT Device SDK to connect to Google Cloud IoT Core.
        
        - Sync data between Google Cloud and AWS EC2:
        You can create a secure API on your EC2 instance to communicate with Google Cloud Firestore. This API will be used by your web application to fetch the sensor data and any other information required from Firestore.
            
            a. Create an API on your EC2 instance (using Node.js, Python, or any other language) that communicates with Firestore using Google Cloud Firestore SDK.
            b. Secure the API using HTTPS and access tokens or API keys.
            c. Make API calls from your web application to fetch data from Firestore.
    </p>
</p>

___

### Results: 

___

###  Contributors
| <a href="https://github.com/Akhilrajeevp"><img src="https://avatars.githubusercontent.com/Akhilrajeevp" width=150px height=150px /></a>| <a href="https://github.com/Vice777"><img src="https://avatars.githubusercontent.com/Vice777" width=150px height=150px /></a>|<a href="https://github.com/Monil-007"><img src="https://avatars.githubusercontent.com/Monil-007" width=150px height=150px /></a>| <a href="https://github.co/SayanthFredaric"><img src="https://avatars.githubusercontent.com/SayanthFredaric" width=150px height=150px /></a>|
| :---: | :---: | :---: | :---: |
| **[Akhil Raveej](https://github.com/Akhilrajeevp)**| **[Vivek Dharewa](https://github.com/Vice777)**| **[Gandhi Monil](https://github.com/Monil-007)**| **[Sayanth Fredaric](https://github.com/SayanthFredaric)**|
| <a href="https://www.linkedin.com/in/akhil-rajeev-p-42bb23235/"><img src="https://mpng.subpng.com/20180324/vhe/kisspng-linkedin-computer-icons-logo-social-networking-ser-facebook-5ab6ebfe5f5397.2333748215219374063905.jpg" width="32px" height="32px"></a> | <a href="https://www.linkedin.com/in/vivek-dharewa/"><img src="https://mpng.subpng.com/20180324/vhe/kisspng-linkedin-computer-icons-logo-social-networking-ser-facebook-5ab6ebfe5f5397.2333748215219374063905.jpg" width="32px" height="32px"></a>| <a href="https://www.linkedin.com/in/monil-gandhi10/"><img src="https://mpng.subpng.com/20180324/vhe/kisspng-linkedin-computer-icons-logo-social-networking-ser-facebook-5ab6ebfe5f5397.2333748215219374063905.jpg" width="32px" height="32px"></a>| <a href="https://www.linkedin.com/in/sayanthfredaric/"><img src="https://mpng.subpng.com/20180324/vhe/kisspng-linkedin-computer-icons-logo-social-networking-ser-facebook-5ab6ebfe5f5397.2333748215219374063905.jpg" width="32px" height="32px"></a>|
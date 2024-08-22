# Drill4J Demo

Example project - [Realworld App](https://github.com/gothinkster/realworld) 
- Backend: [Java + Spring Boot](https://github.com/Drill4J/spring-boot-realworld-example-app)
- Frontend: [JS + Angular](https://github.com/Drill4J/angular-realworld-example-app)

Drill4J services:
- [Drill4J UI](http://localhost:8091) - manage API keys
- [Metabase](http://localhost:8095) - view metrics
- [Drill4J Backend](http://localhost:8090) - main backend. Collects metrics and hosts API

## Prerequisites to run demo

1. [Docker](https://www.docker.com/) 
2. [Java 8/1.8](https://www.oracle.com/java/technologies/downloads/) or later
3. [Git](https://git-scm.com/downloads)

## How to run

1. Clone project

    ```shell
    git clone https://github.com/Drill4J/realworld-demo.git;
    cd realworld-demo
    ``` 

2. Deploy Drill4J services:

    1. Navigate to `/docker` folder 
    2. Launch script
    ```shell
    ./start-drill4j-services.sh
    ```
    3. __Wait__ for the docker-compose to start all services

3. Deploy Realworld App

    1. Make sure to be in the `/docker` folder
    2. Launch script 
    ```shell
    ./start-realworld.sh
    ```

4. Open the following link <http://localhost:8095> to access Metabase 

    1. Login using the credentials
    ```
        # email
        user@user.user
        # password 
        useruser1 
    ```

5. Open [Builds](http://localhost:8095/dashboard/1-builds?group=&app=) page to view available application versions.

    1. Click on individual build title (e.g. [`realworld:backend:0.1.0`](http://localhost:8095/dashboard/2?group=realworld&app=backend&build=realworld%3Abackend%3A0.1.0&baseline_build=&package_filter=*&class_filter=*)) to see metrics.

6. Execute tests for `realworld:backend:0.1.0` build

    1. Navigate back to repository root
    2. Execute script
    ```
        ./test.sh build1 
    ```
    3. Wait for the tests to complete (you will see the message in the terminal)

7. Look at metrics for [`realworld:backend:0.1.0`](http://localhost:8095/dashboard/2?group=realworld&app=backend&build=realworld%3Abackend%3A0.1.0&baseline_build=&package_filter=*&class_filter=*) again.
    - Notice how Drill4J collected coverage and grouped it for each distinct test

8. Look at metrics for [`realworld:backend:0.2.0`](http://localhost:8095/dashboard/2?group=realworld&app=backend&build=realworld%3Abackend%3A0.2.0&baseline_build=&package_filter=*&class_filter=*) build
    - Set `"Baseline Build"` filter value to `realworld:backend:0.1.0`
    - Now you should see two new mterics - "Changes" and "Recommended tests". This data is infered based on metrics collected for `realworld:backend:0.1.0` and changes introduced with `0.2.0` version.

9. Execute tests for `realworld:backend:0.2.0` build

    ```
        ./test.sh build2
    ```

10. Look at metrics for [`realworld:backend:0.2.0`](http://localhost:8095/dashboard/2?group=realworld&app=backend&build=realworld%3Abackend%3A0.2.0&baseline_build=&package_filter=*&class_filter=*) again. You should see that:
    - coverage % increased
    - number of untested changes reduced

## Teardown

1. Navigate to `docker` folder
2. Execute `teardown.sh` script

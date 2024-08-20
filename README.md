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
    git clone https://github.com/Drill4J/realworld-java-and-js-coverage.git;
    cd realworld-java-and-js-coverage
    ``` 

2. Deploy Drill4J services

    ```shell
    ./start-drill4j-services.sh
    ```

3. Deploy Realworld App

    ```shell
    ./start-example-realworld-app.sh
    ```

4. Login to [Metabase](http://localhost:8095)

    ```
        # email
        user@user.user
        # password 
        useruser1 
    ```

5. Open [Builds](#) page to view available application versions. Click on individual build title (e.g. `realworld:backend:0.1.0`) to see metrics.

6. Execute tests for `realworld:backend:0.1.0` build

    ```
        ./tests.sh build1 
    ```

7. Look at metrics for [`realworld:backend:0.1.0` build](#) again.
    - Notice how Drill4J collected coverage and grouped it for each distinct test

8. Look at metrics for [`realworld:backend:0.2.0` build](#)
    - Set `"Baseline Build"` filter value to `realworld:backend:0.1.0`
    - Now you should see two new mterics - "Changes" and "Recommended tests". This data is infered based on metrics collected for `realworld:backend:0.1.0` and changes introduced with `0.2.0` version.

9. Execute tests for `realworld:backend:0.2.0` build

    ```
        ./tests.sh build2
    ```

10. Look at metrics for [`realworld:backend:0.2.0` build](#) again. You should see that:
    - coverage % increased
    - number of untested changes reduced

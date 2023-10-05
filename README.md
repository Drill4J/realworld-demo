# Drill4J: Java + JavaScript setup

This repository demonstrates how Drill4J enables various metrics collection (including coverage) for both backend and frontend applications across multiple builds

The demo is based on [RealWorld example apps](https://codebase.show/projects/realworld)

## Notes

1. This is not an installation guide. For the installation instructions, please refer to the documentation on [Drill4J Website](https://drill4j.github.io/docs/installation/drill-admin)

2. *at the moment* this demo works only for Windows 10.

3. *at the moment* Frontend JavaScript coverage collection for automated tests works only when running **headful Chrome**

> Efforts to enable Frontend coverage collection for both headless Chrome support and Linux/macOS are in progress.

## Setup overview

1. There is RealWorld API service and RealWorld Frontend service. These are example applications, think of them as "target" applications which you want to collect metrics from.

2. Both are forked and modifed to enable Drill4J integration
    - [Backend API service](https://github.com/Drill4J/spring-boot-realworld-example-app)
    - [Frontend application](https://github.com/Drill4J/angular-realworld-example-app)

3. Additionally, [Drill4J Backend Admin API service](http://localhost:8091) and [Drill4J Admin Panel](http://localhost:8091) are deployed.

## Running demo

### Deploy Drill4J services and the **1-st** application build

1. Launch Drill4J services & deploy 1-st application build

    ```shell
    ./demo-up.sh
    ```

2. Open [Frontend Example Application](http://localhost:8080) and wait until it becomes available

3. Open [Drill4J Admin Panel](http://localhost:8091). Open the group with agents and wait for the agent's status 
to change from the "Registering" state to the "Registered" state (a notable difference between the second status
and the first one is the presence of a green checkmark next to the agent).

### Run tests for the **1-st** application build

1. Run

    ```shell
    ./gradlew clean :build1:test
    ```

2. Wait for tests to complete

3. Open [Drill4J Admin Panel](http://localhost:8091) to see the result

4. Finish both scopes


### Deploy the **2-nd** application build

1. Deploy the 2-nd application build

    ```shell
    ./demo-deploy-build2.sh
    ```

2. Wait for build notification to appear (click the Bell icon in the bottom-left corner of the page)

3. **Optional**: Click on the "Go to Build" button inside notification to explore the new build. See how Drill4J detected new, modified and deleted methods

### Run tests for the **2-nd** application build

1. Run tests by

    ```shell
    ./gradlew clean :build2:test2run
    ```

2. Wait for tests to complete

3. Open [Drill4J Admin Panel](http://localhost:8091) to see the result

4. Finish both scopes

## Teardown

1. To remove demo setup run

  ```shell
  ./demo-down.sh
  ```

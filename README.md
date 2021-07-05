# Drill4J: Java + JavaScript setup

This repository demonstrates how Drill4J enables various metrics collection (including coverage) for both backend and frontend applications across multiple builds

The demo is based on [RealWorld example apps](https://codebase.show/projects/realworld)

> Tip: this is not an installation guide. For the installation instructions, please refer to documentation on [Drill4J Website](https://drill4j.github.io/docs/installation/drill-admin)

The setup is quite simple:

1. There is a backend API service and the frontend example application. Think of these as "target" (or "your") applications which you want to collect metrics from.

2. Additionally, [Drill4J Backend Admin API service](http://localhost:8091) and [Drill4J Admin Panel](http://localhost:8091) are deployed.

## Deploy Drill4J services and the **first application build**

1. Launch Drill4J services & deploy first application build

    ```shell
    ./demo-up.sh
    ```

2. Open [Frontend Example Application](http://localhost:8080) and wait until it becomes available

3. Open [Drill4J Admin Panel](http://localhost:8091). Expand the group entry, then register both backend and frontend agent.

      > There is no need to specify any parameters during the registration, just click through steps leaving everything as-is.

## Run tests for the **first application build**

1. Run

    ```shell
    ./gradlew clean :build1:test
    ```

2. Wait for tests to complete

3. Open [Drill4J Admin Panel](http://localhost:8091) to see the result

4. Finish both scopes

## Deploy the **second application build**

1. Deploy the second application build

    ```shell
    ./demo-deploy-build2.sh
    ```

2. Wait for build notification to appear (click the Bell icon in the top-right corner of the page)

3. **Optional**: Click on the "Dashboard" button inside notification to explore the new build. See how Drill4J detected new, modified and deleted methods

## Run tests for the **second application build**

1. Run tests by

    ```shell
    ./gradlew clean :build2:test
    ```

2. Wait for tests to complete

3. Open [Drill4J Admin Panel](http://localhost:8091) to see the result

4. Finish both scopes

## Deploy the **third application build**

1. Deploy the second application build

    ```shell
    ./demo-deploy-build3.sh
    ```

2. Again, wait for build notification to appear in the (bell in the top-right corner must have a red circle next to it)

## Run tests for the **third application build**

1. Run

    ```shell
    ./gradlew clean :build3:test
    ```

2. Wait for tests to complete

3. Open [Drill4J Admin Panel](http://localhost:8091) to see the result

## Teardown

1. To remove demo setup run

  ```shell
  ./demo-down.sh
  ```

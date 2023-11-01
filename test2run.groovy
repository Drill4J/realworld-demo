import groovy.json.JsonSlurper

println('suggestedTests...');
def token = ""
try {
    final String loginUrl = "http://localhost:8091/api/login"
    def baseUrl = new URL(loginUrl)
    String response = ""
    HttpURLConnection connection = (HttpURLConnection) baseUrl.openConnection();
    connection.addRequestProperty("Accept", "application/json")
    connection.with {
        doOutput = true
        requestMethod = 'POST'
        response = content.text
    }

    def parseJson = new JsonSlurper().parseText(response)
    token = "Bearer " + parseJson.token
} catch (Exception ex) {
    println('Error occured while taking authorization token from Drill4J.');
    ex.printStackTrace()
}

Set<String> test2run = []
try {
    final String url = "http://localhost:8091/api/groups/realworld-app/plugins/test2code/data/tests-to-run"
    def baseUrl = new URL(url)
    String response = ""
    HttpURLConnection connection = (HttpURLConnection) baseUrl.openConnection();
    connection.addRequestProperty("Accept", "application/json")
    connection.addRequestProperty("Content-Type", "application/json")
    connection.addRequestProperty("Authorization", token)
    connection.with {
        doOutput = true
        requestMethod = 'GET'
        response = content.text
    }

    JsonSlurper json = new JsonSlurper()
    def parseJson = json.parseText(response)
    println('Recommended tests count:  ' + parseJson.totalCount)
    if (parseJson.totalCount > 0) {
        def tests = parseJson.byType.AUTO
        for (def item : tests) {
            test2run.add(item.details.path + '.' + item.details.testName);
        }
    }
    println('Recommended tests: ')
    println(test2run);
} catch (Exception e) {
    println('Error occured while obtaining tests recommended by Drill4J. All tests will be launched instead');
    e.printStackTrace()
}
return test2run

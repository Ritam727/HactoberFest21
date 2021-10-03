bool isValid(bool graph[101][101], int color[], int vertex, int iColor, int V) {
	for (int i = 0; i < V; i++) {
		if (graph[vertex - 1][i]) {
			if (color[i + 1] == iColor)
				return false;
		}
	}

	return true;
}

bool nextVertex(bool graph[101][101], int color[], int vertex, int V, int M) {

	if (vertex == V + 1)
		return true;

	for (int iColor = 1; iColor <= M; iColor++) {
		if (isValid(graph, color, vertex, iColor, V)) {
			color[vertex] = iColor;
			if (nextVertex(graph, color, vertex + 1, V, M))
				return true;

			else
				color[vertex] = -1;
		}
	}

	return false;
}

bool graphColoring(bool graph[101][101], int M, int V)
{
	int color[V + 1] = {0};
	for (int &iColor : color)
		iColor = -1;
	return nextVertex(graph, color, 1, V, M);
}




